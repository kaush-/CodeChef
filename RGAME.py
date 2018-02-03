mod = 10**9 + 7


for _ in range(int(raw_input())):
    N = int(raw_input())
    A = map(int, raw_input().split())
    PFD = list()
    for i in range(N+1):
        PFD.append((A[i] * (2**(N-i))) % mod)
    ans = 0
    for i in range(N):
        if i == 0:
            WRP = 1
        else:
            WRP = 2**(i-1) % mod
            
        WRP = A[i]*WRP % mod
        for j in range(i+1,N+1):
            ans += (WRP *PFD[j]) % mod
            
    print 2*ans % mod