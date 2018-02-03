N = int(raw_input())
for _ in range(N):
    print " ".join(map(str, sorted(map(int, raw_input().split()))))
