#Seaborn plots with Aesthetic functions

import numpy as np
import matplotlib.pyplot as plt
import seaborn as sns
def sinplot(n=10):
    x = np.linspace(0, 14, 100)
    for i in range(1, n + 1):
        plt.plot(x, np.sin(x + i * .5) * (n + 2 - i))     
sns.set_theme()
sns.set_context("notebook", font_scale=1.5, rc={"lines.linewidth": 2.5})
sinplot()
plt.title('Seaborn plots with Aesthetic functions')
plt.show()