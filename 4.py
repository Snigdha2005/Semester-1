#user input of list of integers
l=list(map(int,input().split()))
suml=0
#creation of newlist
newlist=[]
#adding elements to newlist from the input list
for i in range(0,len(l)):
    suml=suml+int(l[i])
    newlist.append(suml)
#printing each element of newlist separated by space
for element in newlist:
    print(element,end=" ")
