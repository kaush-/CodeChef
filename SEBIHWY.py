for _ in range(int(raw_input())):
    S, SG, FG, D, T = map(float, raw_input().split())
    S = S + (D*50*60*60)/(T*1000)
    SG = abs(SG - S)
    FG = abs(FG - S)
    if SG < FG:
        print "SEBI"
    elif SG > FG:
        print "FATHER"
    else:
        print "DRAW" 