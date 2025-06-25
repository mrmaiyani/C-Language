import pandas as pd
data = pd.Series([10,20,10,None,30,20,None,40], index = ['apple','mango','Banana','Graps','Strawberry','cherry','peach','orange'])

print("Original Series:")
print(data)

# head()
print("\nFirst 5 elements:")
print(data.head())
#print(data.head(3))

# tail()
print("\nLast 5 elements:")
print(data.tail())
#print(data.tail(3))

#mean()
print("\n mean of value (excuding nan):")
print(data.mean())

#sum()
print("\n sum of value (excuding nan):")
print(data.sum())

# sort_values()
print("\nSorted by values:")
print(data.sort_values()) #print(data.sort_values(ascending=False))

# sort_index()
print("\nSorted by index:")
print(data.sort_index()) #print(data.sort_index(ascending=False))

#unique()
print("\nUnique values:")
print(data.unique())

#value_counts()
print("\nFrequency of each value:")
print(data.value_counts())

