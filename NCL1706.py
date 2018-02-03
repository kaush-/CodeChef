for _ in range(int(raw_input())):
    N = int(raw_input())
    
    X = N/6
    ans = [0,0,0]
    flag1 = 0
    flag2 = 0
    
    for i in range(X+1)[::-1]:
        if flag1 == 1:
            break
        xleft = N
        ans[0] = i
        if xleft - (i*6) == 0:
            break
        xleft = xleft - (i*6)
        Y = xleft/10 
        for j in range(Y+1)[::-1]:
            yleft = xleft
            ans[1] = j
            if yleft - (j * 10) == 0:
                flag1 = 1
                break
            yleft = yleft - (j*10)
            ans[2] = yleft/15
            if yleft % 15 == 0:
                flag1 = 1
                break
            
    #print ans[0]*6 + ans[1]*10 + ans[2]*15 
    if ans[0]*6 + ans[1]*10 + ans[2]*15 == N:
        print ans[0]*6*'5'+ans[1]*10*'3'+ans[2]*15*'2'
    else:
        print '-1'