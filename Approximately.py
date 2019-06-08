for _ in range (0,int(input())):
    a = int(input())
    ANS = "3.1"
    if(a==0):
        print("3")
    elif(a==1):
        print("3.1")
    else:
        a=a-1
        rem = 0
        temp = 13768
        while(a):
            rem = int((temp*10)//33102)
            temp = (temp*10)%33102
            ANS = ANS + str(rem)
            a=a-1
        print(ANS)
            
        
