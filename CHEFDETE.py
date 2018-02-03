N = int(raw_input())
A = set(map(int, raw_input().split()))
res = str()
for i in xrange(1, N+1):
    if i not in A:
        res = res + ' '+ str(i) 

print res.strip()