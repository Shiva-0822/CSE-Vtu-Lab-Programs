#To write python to demonstrate how to draw a scatter plot using matplotlib

import matplotlib.pyplot as plt
x1=[89,43,36,36,95,10,66,34,38,20]
y1=[21,46,3,35,67,95,53,72,58,10]
plt.scatter(x1,y1,c="pink",linewidth=2,marker="s",edgecolor="green",s=50)
plt.xlabel("x-axis")
plt.ylabel("y-axis")
plt.show()