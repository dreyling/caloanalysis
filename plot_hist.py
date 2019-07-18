'''plot hist pulse

Usage:
    plot_hist.py (--input=<input> --parameter=<parameter>)

Options:
    --input=<input>             data pulse file [required]
    --parameter=<parameter>     parameter to plot
    
    -h --help                   show usage of this script
    -v --version                show the version of this script

Author: Jan Dreyling-Eschweiler, feel free to use and modify
'''

from docopt import docopt
import numpy as np
import matplotlib.pyplot as plt

############################################
# arguments
arguments = docopt(__doc__, version='plot hist')
input_file = arguments['--input']
parameter = arguments['--parameter']

title_save = input_file[7:-4] + '_' + parameter
#print(title_save)

############################################
# getting data
data   = np.load(input_file)

# for signal
hist_data = data[parameter]

#############################################
## Plotting Data
fig, ax = plt.subplots(figsize=(6, 6))#, dpi=100)
fig.subplots_adjust(left=0.11, right=0.95, top=0.94, bottom=0.10)

# data
n, bins, patches = plt.hist(hist_data, 50, density=True, facecolor='g', alpha=0.75)

# options
ax.set_ylabel('counts')
ax.set_xlabel('voltage [V]')

# scales
#ax.set_xlim(-0.5, 0.5)
#ax.set_xscale("log")
#ax.set_ylim(1, 8e5)
ax.set_yscale("log")

#################################################
## save name in folder
name_save =  "output/" + title_save + str(".pdf") 
fig.savefig(name_save)
print("evince " + name_save + "&")

