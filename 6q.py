while True:#to keep taking inputs
    user_input=list(input().strip("[]").split(","))#user input
    try :#try block
        if(user_input[0]==""):#check if empty
            raise ValueError("Empty-List-Found")
        for i in user_input:
            newlist=list(i.split('.'))#to split float number
            if(((element.isdigit()==False) for element in newlist) and i.isdigit()==False and i.isalnum()==True):#to check if only alphabets
                raise ValueError("Non-numeric-error-found")
            if(float(i)<0):#to check if input negative
                raise ValueError("Negative-value-found")
        user_input=list(map(float,user_input))#typecasting into float
        average=sum(user_input)/len(user_input)#calculating average
        print(f'{average:.0f}')
        break
    except ValueError as e:#except block for ValueError
        print(e.args[0])
    except:#except block for generic errors
        print("error-occured-during calculation")
        break


