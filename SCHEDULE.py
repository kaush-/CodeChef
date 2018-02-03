def getbig(A):
    size = 1
    loc = 0
    count = 0
    pre = -1
    for i in range(len(A)):
        if i == 0:
            pre = A[i]
            count = 1
            loc = i
            size = 1
            continue
        if pre == A[i]:
            count += 1
            if count > size :
                size = count
                loc = i
        else:
            count = 1
            pre = A[i]     
        
            
    return (size, loc)

for _ in range(int(raw_input())):
    N, K = map(int, raw_input().split())
    G1 = [1 if i % 2 == 0 else 0 for i in range(N)]
    G2 = [0 if i % 2 == 0 else 1 for i in range(N)]
    seq = map(int, raw_input().replace('', ' ').split())
    dif1 = [a-b for a,b in zip(G1, seq)]
    dif2 = [a-b for a,b in zip(G2, seq)]
    if dif1.count(1) + dif1.count(-1) <= K or dif2.count(1) + dif2.count(-1) <= K:
        print 1
        continue
    
    ans = N
    for _ in range(K):
        big, loc = getbig(seq)
        #print "Big Loc = ",big, loc
        if ans > big:
            ans = big
        loc = loc - big + 1
        
        if big % 2 == 0:
            temp1 = loc + big/2 - 1
            temp2 = loc + big/2
            if N-1-temp2 < temp1:
                loc = temp2
            else:
                loc = temp1
        else:
            loc = loc + big/2
        
        if seq[loc] == 1:
            seq[loc] = 0
        else:
            seq[loc] = 1
        
        #print "Seq=", seq
    
    big, loc = getbig(seq)            
    #print "out Big Loc = ",big, loc
    if ans > big:
        ans = big    
    print ans