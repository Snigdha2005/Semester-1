def factorial(n):
    if n==(0) or n==1:
        return 1
    else:
        return factorial(n-1)*n

x = int(input(""))
y = factorial(x)
print('The factorial of given number is ',y)

