'''plot single pulse

Usage:
    plot_single.py (--input=<input>)

Options:
    --input=<input>             single pulse file [required]
    
    -h --help                   show usage of this script
    -v --version                show the version of this script
'''

from docopt import docopt
import numpy as np
import matplotlib.pyplot as plt

############################################
# arguments

arguments = docopt(__doc__, version='plot single pulse')
input_file = arguments['--input']

title_save = input_file[-15:-4]
print(title_save)

############################################
# getting data
data = np.loadtxt(input_file, delimiter='\t', usecols=(3, 4), unpack=True)

xdata = data[0]
ydata = data[1]

#np.min(ydata)

#############################################
## Plotting Data
fig, ax = plt.subplots(figsize=(6, 6))#, dpi=100)
fig.subplots_adjust(left=0.11, right=0.95, top=0.94, bottom=0.10)

plt.plot(xdata, ydata)

plt.grid(True)

#ax.set_title(title_plot)
ax.set_xlabel(r'time')
ax.set_ylabel("voltage")



n_min = ydata.argmin()

plt.plot(xdata[n_min],ydata[n_min],'x')
#plt.text(xdata[n_min],ydata[n_min])

print(xdata[n_min],ydata[n_min])


#################################################
## save name in folder
name_save =  "output/" + title_save + str(".pdf") 
fig.savefig(name_save)
print("evince " + name_save + "&")

# scales
#ax.set_xlim(-0.5, 0.5)
#ax.set_xscale("log")
#ax.set_ylim(1, 8e5)
#ax.set_yscale("log")

