x=['1','2','3','4','5','6','7','8','9']
y=['-1','-2','-3','-4','-5','-6','-7','-8','-9']
z=['']
print(x)
print(y)
for i in range(1,9,2):
    z.append(x[i])
for p in range(0,10,2):
    z.append(y[p])
z.remove('')    
print(z)        
