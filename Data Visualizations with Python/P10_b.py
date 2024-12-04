# Write a Python program for creating Maps using Plotly Libraries.

import plotly.express as px
import pandas as pd

# Import data from GitHub
data = pd.read_csv('https://raw.githubusercontent.com/plotly/datasets/master/gapminder_with_codes.csv')

# Create basic choropleth map
fig = px.choropleth(data, locations='iso_alpha', color='gdpPercap', hover_name='country',
                    projection='natural earth', title='GDP per Capita by Country')
fig.show()
