#uses python 3
import math
for _ in range (0,int(input())):
    w = int(input())
    while(w!=0):
        r = math.sqrt(w)
	w = w-(r*r)
        i+=1
    print(i)
