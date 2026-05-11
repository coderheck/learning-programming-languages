import pandas as pd
pd.set_option('display.max_rows', 5)
fruits = pd.DataFrame(
    {"Apples":[30],"Bananas":[21]}
)
print(fruits)
fruit_sales = pd.DataFrame(
    {"Apples":[35,41],"Bananas":[21,34]},
    index = ["2017 Sales","2018 Sales"]
)
print(fruit_sales)
