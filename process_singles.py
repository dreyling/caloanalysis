'''process singles and get pulse parameters

Usage:
    process_singles.py (--path=<path>) [--test]

Options:
    --path=<path>               single pulse file [required]
    --events=<events>           number of events
    -h --help                   show usage of this script
    -v --version                show the version of this script

Author: Jan Dreyling-Eschweiler, feel free to use and modify
'''

from docopt import docopt
import numpy as np
import matplotlib.pyplot as plt
import os


############################################
# arguments
arguments = docopt(__doc__, version='process singles')
data_path = arguments['--path']

# files in folder
files = np.sort(os.listdir(data_path))

# initialize arrays
total_n = np.array([], dtype=str)
total_i = np.array([], dtype=int)
total_sum_raw = np.array([], dtype=float)
total_peak_raw_y = np.array([], dtype=float)


#for i in [0, 1]:
for i, n in enumerate(files):

  # data input
  data_in = data_path + n
  data = np.loadtxt(data_in, delimiter='\t', usecols=(3, 4), unpack=True)
  time  = data[0]
  pulse = data[1]
  # del/close open file
  #del data.f
  #data.close()
  
  # raw: integral, peak
  time_bin = abs(time[1]-time[0]) 
  sum_raw = np.sum(time_bin * pulse)
  peak_raw_y = np.min(pulse)
    
  total_n = np.append(total_n, n)
  total_i = np.append(total_i, i) 
  total_sum_raw = np.append(total_sum_raw, sum_raw)
  total_peak_raw_y = np.append(total_peak_raw_y, peak_raw_y)
  
  # end of for loop
  if arguments['--test']:
    print(i, n, sum_raw, peak_raw_y)
    if i == 100:
      break

# save summary
#save_name = script_name[:-3] + '-' + data_path[0:-1] 
save_name = 'output/' + data_path[-15:-1] 
np.savez(save_name, 
    name = total_n, 
    index = total_i, 
    area_raw = total_sum_raw, 
    peak_raw = total_peak_raw_y, 
    )

