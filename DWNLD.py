#!/usr/bin/python


T = int(raw_input())
for i in range(T):
    str = raw_input().split()
    N = int(str[0])
    K = int(str[1])
    res = 0
    for j in range(N):
        str1 = raw_input().split()
        Ti = int(str1[0])
        D = int(str1[1])
        if K > 0 :
            if K >= Ti:
                K = K - Ti
                Ti = 0
            else:
                Ti = Ti - K
                K = 0
                
        res = res + (Ti*D)
    print res
        