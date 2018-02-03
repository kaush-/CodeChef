from operator import add
from math import factorial

for _ in xrange(int(raw_input())):
    N, M = map(int, raw_input().split())
    lst = [0] * M
    for _ in xrange(N):
        lst = map(add, lst, map(int, raw_input().replace('', ' ').strip().split()))
    
    print sum([(factorial(x)/(factorial(x-2)*2)) if x > 1 else 0 for x in lst])