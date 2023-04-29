class Vehicle:#creation of new class named Vehile
    def __init__(self,max_speed,seating_capacity,mileage):#constructor
        self.max_speed=max_speed
        self.seating_capacity=seating_capacity
        self.mileage=mileage
    def charge(self):#charge method to calcculate fare
        return self.seating_capacity*200
class Bus(Vehicle):#creation of subclass named Bus
    def __init__(self,max_speed,seating_capacity,mileage):#constructor
        Vehicle.__init__(self,max_speed,seating_capacity,mileage)#inheritance
    def buscharge(self):#buscharge method to calculate charge for bus
        return self.charge()+(self.charge())*0.05
    def __str__(self):#printing
        return str(int(self.buscharge()))
while(True):
    user_input=input().split()#input of bus name max_speed seating_capacity mileage
    if user_input[0]!='E':#condition for taking user inputs
        print(user_input[0],end=" ")#printing name of bus
        user_input[1]=int(user_input[1])
        user_input[2]=int(user_input[2])
        user_input[3]=int(user_input[3])
        user_input[0]=Bus(int(user_input[1]),int(user_input[2]),int(user_input[3]))#creation of object of class Bus
        print(user_input[0])#printing buscharge
    else:
        break#exiting if E input given
