for _ in range(int(raw_input())):
    n,m,c = map(int, raw_input().split())
    count = 0
    for i in range(int(c**0.5)+1)[1:]:
        if c % i == 0 :
            if i <= n and c/i <= m:
                count += 1
            if i != c/i and i <= m and c/i <= n:
                count += 1
    
    print count