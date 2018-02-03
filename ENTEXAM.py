for _ in range(int(raw_input())):
    N, K, E, M = map(int, raw_input().split())
    score = list()
    for i in range(N-1):
        #print "score", score
        score.append(sum(map(int, raw_input().split())))
    mscore = sum(map(int, raw_input().split()))
    score.sort()
    #print 'sorted', score
    dif = score[::-1][K-1] - mscore
    #print 'DIff', dif
    if dif < 0 :
        print 0
    elif dif + 1 > M:
        print 'Impossible'
    else:
        print dif + 1
    
        