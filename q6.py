while(True):
    try:
        userinput=input().strip("[]").split(',')
        for element in userinput:
            if element.isalpha==True:
                raise ValueError
    except:
        print("non")
    try:
        if int(element)<0:
            raise ValueError
    except:
        print("Negative-Value-Found")
    '''else:
        try:
            if element=="":
                raise ValueError
        except:
            print("Empty-List-Found")'''
