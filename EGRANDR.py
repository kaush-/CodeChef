for _ in xrange(int(raw_input())):
    N = int(raw_input())
    A = raw_input()
    if A.find('2') == -1 and A.find('5') != -1 and sum(map(float, A.split()))/N >= 4.0:
        print 'Yes'
    else:
        print 'No'
    