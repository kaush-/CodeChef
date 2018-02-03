def gcd(a, b):
    """Return greatest common divisor using Euclid's Algorithm."""
    while b:      
        a, b = b, a % b
    return a

def lcm(a, b):
    """Return lowest common multiple."""
    return a * b // gcd(a, b)

for _ in range(int(raw_input())):
    N = int(raw_input())
    A = sorted(map(int, raw_input().split()))
    ans = lcm(A[0], A[1])
    for i in range(len(A)):
        for j in range(i+1, len(A)):
            ans = min(lcm(A[i], A[j]), ans)
    print ans