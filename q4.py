class Stack(list):#creating a subclass named Stack with parent class list
    def __init__(self):#constructor
        self.x=self
    def push(self,item):#push method
        self.append(item)
    def Pop(self):#Pop method
        return self.pop()
    def is_empty(self):#is_empty method
        if self==[]:
            return True
        else:
            return False
    def __str__(self):#method to print
        return self 
#user input of number of actions
x=int(input())
#Stack object
obj=Stack()
#to count the number of actions and perform
for i in range(x):
    userinput=input().split()#user input of action to be performed and the arguments to be passed to perform that action
    if userinput[0]=='Push':
        obj.push(userinput[1])#uding push method for Stack object
    elif userinput[0]=='Pop':
        obj.Pop()#using Pop method for Stack object
    elif userinput[0]=='Output':
        copyobj=obj[:]#cloning of list obj
        copyobj.reverse()#reversing of elements in the list copyobj
        print(*copyobj)#unpacking of list elements
    elif userinput[0]=='Empty':
        print(obj.is_empty())#using is_empty method
        
