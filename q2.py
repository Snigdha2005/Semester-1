class BankAccount(object):
    def __init__(self,balance=0):#constructor
        self.balance=balance
    def deposit(self,amount):#deposit method
        self.balance=self.balance+amount
    def withdraw(self,amount):#withdraw method
        self.balance=self.balance-amount
    def __str__(self):#method to print
        return str(self.balance)
#user input of number of queries
x=int(input())
obj=BankAccount()#BankAccount object
#to count the number of queries
for i in range(0,x):
    userinput=input().split()#input of method required and other arguments to be passed to the particular method
    if userinput[0]=='Deposit':
        amount=int(userinput[1])
        obj.deposit(amount)#using deposit method
    elif userinput[0]=='Withdraw':
        amount=int(userinput[1])
        obj.withdraw(amount)#using withdraw method
    elif userinput[0]=='Balance':
        print(obj)#using __str__ method

