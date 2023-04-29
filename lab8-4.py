x=input().split()
suml=0
for i in range(0,len(x)):
    if i==13 or i==14:
        continue
    else:
        suml=suml+int(x[i])
print(suml)        
