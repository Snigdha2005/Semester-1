p=1
def power(a,b):
    if b>1:
        global p
        p = p*a
        return power(a,b-1)
    elif b==1:
        return p*a

a = int(input(""))
b = int(input(""))
print(power(a,b))

