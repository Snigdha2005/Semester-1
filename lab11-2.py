class Rectangle:#creation of Rectangle class
    def __init__(self,length,width):#constructor
        self.length=length
        self.width=width
    def area(self):#area method for calculating area
        return self.length*self.width
    def perimeter(self):#perimeter method for calculating perimeter
        return 2*(self.length+self.width)
    @classmethod
    def from_square(self,side_length):#side of length
        self.length=side_length
        self.width=side_length
        return (self.length,self.width) 
    def __del__ (self):#destructor
        del self
    def __str__(self):#printing
        return str(self)
user_input=input().split()#input of width and length
obj=Rectangle(int(user_input[0]),int(user_input[1]))#creation of object of class Rectangle
print(obj.area(),obj.perimeter())#printing area and perimeter of given object
x=obj.from_square(user_input[0])
newobj=Rectangle(int(x[0]),int(x[1]))#creation of newobject with length and width equal using from_square method
print(newobj.area(),newobj.perimeter())#printing area and perimeter of new sqaure

