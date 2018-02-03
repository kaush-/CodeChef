
for _ in range(int(raw_input())):
    N = int(raw_input())
    C = map(int, raw_input().split())
    chk = 0
    if len(C) != len(set(C)):
        print "no"
        continue
    
    if range(1,(N+1)) == C:
        print "no"
        continue
    
    if set(C) == set(range(1,(N+1))):
        print "yes"
        continue
    print "no"
        