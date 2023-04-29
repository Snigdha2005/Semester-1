x=input().split()
newx=[]
for element in x:
    if element not in newx:
        newx.append(element)
print(newx)        

