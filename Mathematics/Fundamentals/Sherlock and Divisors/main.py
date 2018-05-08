from math import sqrt
from collections import *
for _ in range(input()):
    n = input()
    divs = Counter()
    for i in range(2,int(sqrt(n))+1):
        while(n%i==0):
            divs.update({i:1})
            n/=i
        if n == 1:
            break
    else:
        divs.update({n:1})
    if divs[2] == 0:
        print 0
    else:
        mul = 1
        for i in divs:
            if i == 2:
                mul*= divs[i]
            else:
                mul*= (divs[i]+1)
        print mul
