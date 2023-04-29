import functools#importing functools for reduce function
x=list(map(int,input().split()))#user input of list of integers
y=lambda a,b:a+b#summation of user input list
z=lambda a,b:a*b#product of user input list
print(functools.reduce(y,x))#printing sum
print(functools.reduce(z,x))#printing product

