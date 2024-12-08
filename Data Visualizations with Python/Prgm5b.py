# To write a Program to demonstrate how to draw a Pie-chart using matplotlib

import matplotlib.pyplot as plt
import numpy as np

cars = ['AUDI','BMW','FORD','TESLA','JAGUAR','MERCEDES']
data = [23, 17, 35, 29, 12, 41]

fig = plt.figure(figsize=(10, 7))
plt.pie(data, labels=cars)
plt.show()
