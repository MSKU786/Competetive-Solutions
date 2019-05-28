import math
for _ in range(int(input())):
    M,B = map(int,input().split())
    print(math.gcd(M,B)*2)
