for _ in range(int(raw_input())):
    N, P = raw_input().split()
    N = int(N)
    A = map(int, raw_input().split())
    if N == 1 and A[0]%2==0 and P == 'Dee':
        print 'Dee'
    else:
        print 'Dum'