import pandas as pd
import numpy as np

data = {
    'name': ['dkp','kjp','hrg','tsp','edj','pmp',np.nan],
    'age':[25,30,35,np.nan,45,50,32],
    'city':['new york','india','new york','chikago',np.nan,'chikago','india']
    }

data = [
    {'name':'kjp','age':25,'city':'ny'},
    {'name':'tkp','age':30,'city':'la','gender':'male'},
    {'name':'sbp','age':35,'city':'chikago'}
    ]

print(data)
df = pd.DataFrame(data)
print(df)
