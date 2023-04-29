def palindrome(n):
    return pal_(n,0)
def pal_(n,r):
    if (n>=1):
        f = r*10+n%10
        return pal_(n//10,f)
    else:
        return r

n = int(input(""))
if n==palindrome(n):
    print('Palindrome')
else:
    print('Not a Palindrome')
