my_list=list(input().split())#creation of list from user inputs
for i in range(len(my_list)):#for typecasting
    if my_list[i].isdigit() ==True:
            my_list[i]=int(my_list[i])
    elif my_list[i].isdecimal()==True:
            my_list[i]=float(my_list[i])
    else:
            my_list[i]=(my_list[i]).strip('"')#to strip the double quotes
my_tuple=(my_list[0],my_list[len(my_list)-1],len(my_list))#creation of new tuple with first last elements and length of list
print(my_tuple)#printing the tuple
