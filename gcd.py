def gcd(x,y):
    if x==y:
        return x
    elif x<y:
        return gcd(y,x)
    else:
        return gcd(y, x-y)

x = int(input(""))
y = int(input(""))
print('The gcd of the given two numbers is: ',gcd(x,y))
