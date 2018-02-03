
N,M = map(int,raw_input().split())
S = set(map(int, raw_input().split()))
lines = []
Special = []
for _ in range(M):
    temp = raw_input().split()
    if int(temp[0]) in S:
        Special.append(temp)
    else:
        lines.append(temp)

Special.sort(key=lambda x: int(x[1]), reverse=True)
lines.sort(key=lambda x: int(x[1]), reverse=True)

for spe in Special:
    print spe[2]
for spe in lines:
    print spe[2]


