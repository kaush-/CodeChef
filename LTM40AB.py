for _ in range(int(raw_input())):
    a,b,c,d = map(int, raw_input().split())
    if b < a or d < c or d < a:
        print 0
        continue
    if d <= b:
        b = d -1
    
    if c <= a:
        c = a + 1
    
    count = (b - a + 1) * (d - c + 1)
    if c <= b:
        n = b - c + 1
        n = (n * (n + 1))/2
        count = count - n
    
    print count
    