#!/usr/bin/python


T = int(raw_input())
for _ in range(T):
    str = raw_input().split()
    N = int(str[0])
    M = int(str[1])
    A = raw_input().split()
    B = raw_input().split()
    res = dict()
    
    for a in A:
        if res.has_key(a):
            continue
        else:
            res[a] = 1
    
    for a in B:
        if res.has_key(a):
            continue
        else:
            res[a] = 1
    
    print (N + M) - len(res)