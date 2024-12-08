# Write a Python program to Demonstrate how to Draw a Histogram Plot using Matplotlib.

import matplotlib.pyplot as plt
import numpy as np

data1 = np.random.normal(loc=-1, scale=1, size=1000)
data2 = np.random.normal(loc=2, scale=1, size=1000)   
plt.hist([data1, data2], bins=30, stacked=True, color=['yellow', 'green'], edgecolor='black')
plt.xlabel('Value')
plt.ylabel('Frequency')
plt.title('Stacked Histogram')
plt.legend(['Dataset 1', 'Dataset 2'])
plt.show()