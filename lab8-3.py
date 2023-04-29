#x=['1','2','3','4','5','6','7','8','9']
x=input().split()
for element in x:
    if int(element)%2==0:
        x.remove(element)
        x.append(element)
print(x)        
