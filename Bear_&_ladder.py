for _ in range(int(input())):
    a,b = map(int,input().split())
    if(a%2==0):
        m = [a-1,a-2,a+2]
    else:
        m = [a+1,a-2,a+2]
    if(b in m):
        print("YES")
    else:
        print("NO")
