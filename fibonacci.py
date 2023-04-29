def fibonacci(n):
    if n==1:
        return 0
    elif n==2:
        return 1
    else:
        return fibonacci(n-1)+fibonacci(n-2)

x = int(input(""))
print('the',x,'term in the fibonacci sequence is',fibonacci(x), sep=" ")

