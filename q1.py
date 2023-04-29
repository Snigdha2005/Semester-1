class complexnumber(object):
    def __init__(self,real,imag):#constructor
        self.real=real
        self.imag=imag
    def __str__(self):#method to print
        if (self.imag>0):
            return str(self.real)+' + '+str(self.imag)+'i'
        else:
            return str(self.real)+' - '+str(abs(self.imag))+'i'
            
    def __add__(self,other):#addition of complexnumber objects
        return complexnumber(self.real+other.real,self.imag+other.imag)
    def __sub__(self,other):#subraction of complexnumber objects
        return complexnumber(self.real-other.real,self.imag-other.imag)
    def __mul__(self,other):#multiplication of complexnumber objects
        return complexnumber(self.real*other.real-self.imag*other.imag,self.imag*other.real+self.real*other.imag)
r1,i1=map(int,input().split())#user input of arguments for complexnumber objects
r2,i2=map(int,input().split())
#complexnumber objects
c1=complexnumber(r1,i1)
c2=complexnumber(r2,i2)
#output
print(c1)
print(c2)
print(c1+c2)
print(c1-c2)
print(c1*c2)
