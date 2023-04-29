#user iput of number of lists
n=int(input())
#creation of newlist
mainlist=[]
#user input of list elements and addition of elements to newlist
for i in range(n):
    l=list(map(int,input().split()))
    mainlist.append(l)
#printing elements of the newlist separated by a space
for element in mainlist:
    for ele in element:
        print(ele,end=" ")

