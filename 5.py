#creating a class student
class student(object):
    def __init__(self,name,rollnumber):#data attribute
        self.name=name
        self.rollnumber=rollnumber
        #use of method
        self.stringatt()
        self.rollnoatt()
    def stringatt(self):#procedural attribute for name
        if (self.name)=='':#checks validity
            print('error')
    def rollnoatt(self):#procedural attribute for rollnumber
        if int(self.rollnumber)<=0:#checks validity
            print('error')
#user inputs of name and rollnumber
name = input()
rollNo =input()
#creating a valid student object
initial=student(name, rollNo)
