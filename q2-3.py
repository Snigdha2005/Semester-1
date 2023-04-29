userinput=list(map(int,input().split(',')))#user input
n=[(n,i) for n in userinput for i in userinput if ((n*i)%2==0 and i>n)]#new list with required output
print(n)#printing the list
