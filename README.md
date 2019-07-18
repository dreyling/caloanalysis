# Analyse lead-counter pulses

Single pulse analyses recorded with LeCroy-Scope.

## Needed

```
sudo apt install python3-docopt
sudo apt install python3-numpy
sudo apt install python3-matplotlib```

```
mkdir output```

## Usage

Plot and analyse a single pulse:
```
python3 plot_single.py --input=example_files/3GeV-1mm-1500V/C1test00000.txt
```
TODO: Extend with fit method.

Process singles and extract parameters in npz-format:
```
python3 process_singles.py --path=example_files/3GeV-1mm-1500V/
```
For testing user --test option for only the first 100 events.
TODO: Change to h5 format (https://stackoverflow.com/questions/30376581/save-numpy-array-in-append-mode/30379177)

List parameters of npz file:
```
python3 ls_parameters.py --input=output/3GeV-1mm-1500V.npz
```

Plot histogramm of extracted parameters
```
python3 plot_hist.py --input=output/3GeV-1mm-1500V.npz --parameter=peak_raw
```
TODO: Extend with fit method.
