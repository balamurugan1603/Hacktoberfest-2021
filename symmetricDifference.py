x=eval(input("Enter list 1"))
y=eval(input("Enter list 2"))
l=[]
for i in x:
    l.append(i)
for j in y:
    if j in l :
        l.remove(j)
    else :
        l.append(j)
print(l)
