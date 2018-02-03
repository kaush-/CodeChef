import sys

maximum = 1001
low = 0
hi = maximum


while low < hi - 1:
    mid = (low + hi)/2
    print "?", mid, 0
    sys.stdout.flush()
    ans = raw_input()
    if ans[0] == 'N':
        hi = mid
    else:
        low = mid

X = low
low = 0
hi = maximum

while low < hi - 1:
    mid = (low + hi)/2
    print "?", mid, 2*X
    sys.stdout.flush()
    ans = raw_input()
    if ans[0] == 'N':
        hi = mid
    else:
        low = mid

X1 = low
low = 2*X 
hi = maximum

while low < hi - 1:
    mid = (low + hi)/2
    print "?", 0, mid
    sys.stdout.flush()
    ans = raw_input()
    if ans[0] == 'N':
        hi = mid
    else:
        low = mid
        
Y = low

area = (4*X*X) + (Y - 2*X)*X1
print "!", area