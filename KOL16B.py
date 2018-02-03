#!/usr/bin/python

def compute(num):
    a = num >> 16
    b = num - (a << 16)
    return (str(a),str(b))


T = int(raw_input())
for i in range(T):
    N = int(raw_input())
    A = list()
    B = list()
    for j in range(N):
        res = compute(int(raw_input()))
        A.append(res[0])
        B.append(res[1])
    print "Case %d:\n%s\n%s" % ((i+1)," ".join(B), " ".join(A))
    