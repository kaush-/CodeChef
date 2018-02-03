from collections import Counter

for _ in range(int(raw_input())):
    N = int(raw_input())
    A = sorted(map(int, raw_input().split()))
    if A[0] != A[1] - 1:
        print A[0]
    elif A[N-2] != A[N-1] - 1:
        print A[N-1]
    else:
        print [k for k,v in Counter(A).items() if v > 1][0]
    
    