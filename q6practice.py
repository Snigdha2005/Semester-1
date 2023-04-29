while True:#to take input until valid list of numbers entered
    try:#try block
        nums = input().split(",")#user input
        nums = [str(num.strip("[]")) for num in nums]#creating a list by stripping[]
        
        if (nums[0]=='' or len(nums)==0):#checking for empty list
            raise ValueError("Empty-List-Found")#raising exception
        newlist=[i.split('.') for i in nums]
        print(newlist)
        if any((num.isalnum()==True and num.isdigit()==False for num in nums) and ((ele.isdigit()==False)for ele in element for element in newlist)):#checking for alpha word
            raise ValueError("Non-Numeric-Value-Found")#raise exception
        if any(float(num) < 0 for num in nums):#checking for negative number
            raise ValueError("Negative-Number-Found")#raising exception
        nums=[float(num) for num in nums]#typecasting into float
        avg = sum(nums) / len(nums)#calculating average
        print(f'{avg:.0f}')#printing the average
        break

    except ValueError as e:#except block for ValueError
        print(str((e.args)[0]))#printing the arg passed after raising exception
        continue
    except ZeroDivisionError:#for ZeroDivisionError
        print("Zero-Division-Error")
        continue
    except:#for other exceptions
        print("error")
        continue
