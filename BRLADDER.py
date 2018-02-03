import math

for _ in range(int(raw_input())):
    a,b = map(int, raw_input().split())
    if a % 2 == 0:
        if b == a-1 or b == a-2 or b == a+2:
            print "YES"
        else:
            print "NO"
    else:
        if b == a+1 or b == a-2 or b == a+2:
            print "YES"
        else:
            print "NO"