x=eval(input("Enter list 1"))
y=eval(input("Enter list 2"))
d = {}
for i in range(len(x)):
    d[x[i]] = y[i]
print(d)
