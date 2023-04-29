n=int(input())#number of inputs
my_dict={}#creation of empty dictionary
for i in range(n):#user input of keys and values of dictionary
    user_input=input().split(':')
    my_dict[user_input[0]]=user_input[1]#adding elements to dictionary
newlist=list(my_dict.values())#creation of list of values
newlist2=[]#creation of empty newlist
[newlist2.append(x) for x in newlist if x not in newlist2]#adding elements without duplicates
for element in newlist2:#printing all element of list without duplicates
    print(element,end=" ")
