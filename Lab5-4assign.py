R = C = int(input())
x='='
y='.'
z=' '

print('#'+x*(R*C)+'#')
for i in range(0,C):
    p = R*i
    #t = 
    s =((R*C)-((p)+4))
    if s/2==0:
        d =int((s/2))
    else:
        d =int( (s+1)/2)
    print('|'+z*d+'<>'+y*p+'<>'+z*d+'|')
n = C-1    
while n>=0:
    v=R*n
    r = ((R*(C))-((v)+4))
    if r/2==0:
        e = int((r/2))
    else:
        e = int((r+1)/2)
    print('|'+z*e+'<>'+y*v+'<>'+z*e+'|')
    n = n-1
print('#'+x*(R*C)+'#')
