import pandas as pd
import matplotlib.pyplot as plt
import seaborn as sns
import os
pd.plotting.register_matplotlib_converters()
# %matplotlib inline

# Set up code checking
if not os.path.exists("../input/fifa.csv"):
    os.symlink("../input/data-for-datavis/fifa.csv", "../input/fifa.csv")
# from learntools.core import binder
# binder.bind(globals())
# from learntools.data_viz_to_coder.ex1 import *
print("Setup Complete")
one=1
fifa_filepath = "../input/fifa.csv"
fifa_data = pd.read_csv(fifa_filepath, index_col="Date", parse_dates=True)
# Set the width and height of the figure
plt.figure(figsize=(16,6))
# Line chart showing how FIFA rankings evolved over time
sns.lineplot(data=fifa_data)
