'''list parameters of numpy archive

Usage:
    ls_parameters.py (--input=<input>)

Options:
    --input=<input>             pulse analyse file [required]
    
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


############################################
# getting data
data   = np.load(input_file)
for value in data.iterkeys():
    print(value)

