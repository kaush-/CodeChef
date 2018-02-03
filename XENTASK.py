for _ in range(int(raw_input())):
    N = int(raw_input())
    X = map(int, raw_input().split())
    Y = map(int, raw_input().split())
    if N == 1:
        if X[0] < Y[0]:
            print X[0]
        else:
            print Y[0]
            
        continue
    
    Xe = sum(X[0:][::2])
    Xo = sum(X[1:][::2])
    Ye = sum(Y[0:][::2])
    Yo = sum(Y[1:][::2])
    
    if Xe + Yo < Xo + Ye:
        print Xe + Yo
    else:
        print Xo + Ye