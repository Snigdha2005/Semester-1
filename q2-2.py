x=list(map(int,input().split(',')))#user input of list of integers
newlist=[(x[i],x[j]) for i in range(len(x)) for j in range(i,len(x)) if (x[i]%2==0 or x[j]%2==0)]#creation of newlist with tuple elements with atleast one even number in the tuple 
n=[(i,j) for (i,j) in newlist if i!=j]#creation of list with tuple elements wherein tuple contains unequal numbers
#printing in required format
print('[',end="")
for i in range(len(n)):
    if (i!=len(n)-1):
        print(n[i],end=",")
    else:
        print(n[i],end="")
print(']')
