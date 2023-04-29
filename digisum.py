s = 0
def sum_of(n):
     if n>=10:
         q = n//10
         r = n%10
         global s
         s = s+r
         return sum_of(q)
     elif n>=0 and n<10:
         return s+n 
     

x = int(input(""))
print('The sum of the digits of ', x, 'is', sum_of(x))
