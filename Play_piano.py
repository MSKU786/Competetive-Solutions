for _ in range (int(input())):
    A = list(input())
    k='yes'
    for i in range(0,len(A),2):
        if(A[i]==A[i+1]):
            k='no'
            break;
    print(k)
