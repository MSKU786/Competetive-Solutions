for _ in range(int(input())):
    A = list(map(int,input().split()))
    A.remove(len(A)-1)
    print(max(A))
