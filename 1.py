#user input of list of integers
l=list(map(int,input().split()))
#function definition to check whether n is prime or not
def isprime(n):
    isflag=True
    if n==1:
        isflag=False
    else:
        for i in range(2,n):#condition for prime
            if n%i==0:
                isflag=False
    return isflag
#creation of newlist
newlist=[]
#addition of only prime numbers from the user input list
for element in l:
    if isprime(int(element))==True:
        newlist.append(element)
#printing elements of newlist separated by a space
for ele in newlist:
    print(ele,end=" ")
