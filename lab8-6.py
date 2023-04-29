x=input().split()
def prime(n):
    isflag=True
    for i in range(2,n):
        if n%i==0:
            isflag=False
    return isflag
for element in x:
    if int(element)!=1:
        y=prime(int(element))
        if y==True:
            if (str(int(element)+2) in x) and prime(int(element)+2)==True:
                print('Twin primes pair:',element, str(int(element)+2),sep=" ")
            



