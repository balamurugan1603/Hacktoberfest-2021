texts = input("Enter the string\n")
result = list(filter(lambda x: (x == "".join(reversed(x))), texts)) 
if len(result)==0:
    print("FALSE")
else:
    print("TRUE")