name=input()#user input of word
start=input()#user input of letter
myfunc=lambda x:x[0]==start#function to check first letter of word
print(myfunc(name))#printing if given letter is the first letter of the given word
