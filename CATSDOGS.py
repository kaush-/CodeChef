def compute(c,d):
    if c <= 2*d:
        return 4*d
    else:
        return 4*(c-d) 

for _ in range(int(raw_input())):
    C,D,L = map(int,raw_input().split())
    if L % 4 == 0 and L >= compute(C,D) and L <= 4*(C+D):
        print "yes"
    else:
        print "no"