import math
from heapq import heappop, heappush

N, K = map(int, raw_input().split())
value = map(int, raw_input().split())
score = [0]*N
score[0] = value[0]
min_q = list()
heappush(min_q, (math.log(score[0]), 0))

for i in range(1, N):
    val, ind = heappop(min_q)
    while i-ind > K:
        val, ind = heappop(min_q)
    
    score[i] = (value[i]*score[ind]) % 1000000007
    heappush(min_q, (val, ind))
    heappush(min_q, (val + math.log(value[i]), i))
    
    
print score[N-1]