#user input of list of integers
l=list(map(int,input().split()))
#creation of newlist
newlist=[]
#adding elements to newlist in the reverse order 
for i in range(1,len(l)+1):
    newlist.append(l[-i])
#printing elements of the newlist separated by a space
for element in newlist:
    print(element,end=" ")
        
