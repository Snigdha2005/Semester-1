class ATM:
class Bank:
    customer_id=0
    def __init__(self,mobile,account):
        self.mobile=mobile
        self.account=account
    def addCustomer(mobile):
        self.mobile=mobile
        customer_id=customer_id+1
        return customer_id
    def addAccount(customer_id,balance):
        return account_id
while(True):
    x=list(map(str,input().split()))
    if (x[0]=='C'):
        addCustomer(int(x[1]))
    elif (x[0]=='A'):
        addAccount(int(x[1]),int(x[2]))
    elif (x[0]=='B'):
        sendOTP(int(x[1]))
    elif (x[0]=='V'):
        verifyOTP(int(x[1]),int(x[2]))
    elif (x[0]=='E'):
        break
