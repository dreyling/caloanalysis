import uproot
import numpy as np
import matplotlib.pyplot as plt

file = uproot.open("run269_2_cal_off_noforce.root")
tree = file["T"]

event = tree["EventNumber"].array()
calos = np.array([tree["y_0"].array(), 
                    tree["y_2"].array(), 
                    tree["y_4"].array(), 
                    tree["y_6"].array(), 
                    tree["y_8"].array()])


for index, value in enumerate(calos):
    print "calo"+str(index+1), len(value), value.mean(), value.std(), value.min(), value.max()

    value = value[value < 10]

    hist, bin_edges = np.histogram(value, density=True, bins=100)

    ## Plotting Data
    fig, ax = plt.subplots(figsize=(6, 6))#, dpi=100)
    fig.subplots_adjust(left=0.11, right=0.95, top=0.94, bottom=0.10)

    # data
    plt.plot(bin_edges[:-1], hist)

    # options
    ax.set_xlim(0, 10)
    ax.set_xlabel('GeV')
    ax.set_ylabel('Counts')
    #ax.set_yscale('log')


    #################################################
    ## save name in folder
    name_save =  "output/" + "calo" + str(index+1) + str(".pdf") 
    fig.savefig(name_save)
    print("evince " + name_save + "&")


###################


#total = calos[0] + calos[1] + calos[2] + calos[3] + calos[4] 
total = calos[0] + calos[2]

print "total", len(total), total.mean(), total.std(), total.min(), total.max()

total = total[total < 5]
total = total[total > 3]

print "total", len(total), total.mean(), total.std(), total.min(), total.max()

hist, bin_edges = np.histogram(total, density=True, bins=100)

## Plotting Data
fig, ax = plt.subplots(figsize=(6, 6))#, dpi=100)
fig.subplots_adjust(left=0.11, right=0.95, top=0.94, bottom=0.10)

# data
plt.plot(bin_edges[:-1], hist)

# options
ax.set_xlim(0, 10)
ax.set_xlabel('GeV')
ax.set_ylabel('Counts')
#ax.set_yscale('log')


#################################################
## save name in folder
name_save =  "output/" + "total" + str(".pdf") 
fig.savefig(name_save)
print("evince " + name_save + "&")



