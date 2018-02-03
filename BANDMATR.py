for _ in range(int(raw_input())):
    N = int(raw_input())
    count = 0
    for _ in range(N):
        count += raw_input().split().count('1')
    
    for i in range(N):
        cal = (2*i)*N - i*(i+1) + N
        if count <= cal :
            break
    
    print i