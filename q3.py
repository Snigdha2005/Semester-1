class Rectangle:
    def __init__(self,width,height):#constructor
        self.width=width
        self.height=height
    def area(self):#area method
        return self.width*self.height
    def perimeter(self):#perimeter method
        return 2*(self.width+self.height)
#user input of arguments witdh and height to be passed
width,height=map(int,input().split())
#object of class Rectangle
obj=Rectangle(width,height)
#output of area and perimeter using area and perimeter methods
print(obj.area())
print(obj.perimeter())

