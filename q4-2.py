class Taxi:#creation of class Taxi
    def __init__(self,rate,agency):#constructor
        self.rate=rate
        self.agency=agency
    def __str__(self,rate,agency):#for printing
        return self
#The above properties are placed in Taxi class since they are a data attribute of each vehicle type thus this way they can directly be inherited and referenced in the constructors of each type
class MicroTaxi(Taxi):#creation of subclass MicroTaxi
    def __init__(self,rate,agency):#constructor
        Taxi.__init__(self,rate,agency)#calling constructor of parent class
    def fare(self,rate,distance):#fare method
        return str(int(self.rate)*int(distance))#return the fare after calculating
class SedanTaxi(Taxi):#creation of subclass SedanTaxi
    def __init__(self,rate,agency):#constructor
        Taxi.__init__(self,rate,agency)#calling constructor of parent class
    def fare(self,rate,distance):#fare method
        return str(int(self.rate)*int(distance))#returns fare
class MiniTaxi(Taxi):#creation of subclass MiniTaxi
    def __init__(self,rate,agency):#constructor
        Taxi.__init__(self,rate,agency)#calling constructor of parent class
    def fare(self,rate,distance):#fare method
        return str(int(self.rate)*int(distance))
class Ride:#creation of class Ride
    def __init__(self,agency):#constructor
        self.agency=agency
    def vehicleType(self,agency,vtype,rate):#vehicleType method
        if vtype=='MicroTaxi':#check the type of vehicle and create object of that type of vehicle and return that object
             self=MicroTaxi(rate[0],agency)
             return self
        elif vtype=='SedanTaxi':
             self=SedanTaxi(rate[2],agency)
             return self
        elif vtype=='MiniTaxi':
             self=MiniTaxi(rate[1],agency)
             return self
    def ffare(self,agency,vtype,rate,distance):#ffare method
        return (self.vehicleType(agency,vtype,rate)).fare(rate,distance)#calculate fare by calling other methods
    def __str__(self):#printing
        return self
r=list(map(int,input().split()))#user input of ratecard
n=int(input())#user input of number of queries
for i in range(n):#counting each query
    inl=list(map(str,input().split()))#user input list of agency vehicletype distance
    inl[2]=int(inl[2])
    obj=Ride(inl[0])#instantiating object of class Ride
    x=obj.ffare(inl[0],inl[1],r,inl[2])#calculating fare
    print(obj.agency,x)#printing the agency name and total fare
