list1=list(map(int,input().split()))#user input lists
list2=list(map(int,input().split()))
newlist=[x for x in list1 if x in list2]#to create a newlist with common elements
print(*newlist)#printing newlist elements separated by a space
