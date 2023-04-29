s=int(input())#user input of number of elements to add to the dictionary
my_dict={}#creation of empty dictionary
for i in range(s):#adding elements to dictionary
    user_input=input().split(':')
    my_dict[user_input[0]]=int(user_input[1])
k=int(input())#user input of k
newlist=list(my_dict.values())#creation of list of dictionary values
newlist.sort(reverse=True)#mutating the list to get descending ordered elements
keyvalues=list(my_dict.keys())#creation of keyvalues list
for element in keyvalues:#to check the corresponding key of kth largest integer value
    if my_dict[element]==newlist[k-1]:
        print(element)#printing the key
