for _ in range(0,int(input())):
    s=0
    a,b,c = map(int,input().split());
    for i in range (-c,c+1):
        for j in range (-c,c+1):
            if((a+i)>0 and (b+j)>0 and (a+i)<=8 and (b+j)<=8):
                s+=1
    print(s)
