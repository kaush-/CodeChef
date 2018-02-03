import math

def f(x):
    return{
        1 : '4LB',
        2 : '5MB',
        3 : '6UB',
        4 : '1LB',
        5 : '2MB',
        6 : '3UB',
        7 : '8SU',
        8 : '7SL'
    }[x]

for _ in range(int(raw_input())):
    N = int(raw_input())
    c = int(math.ceil(N/8.0)) - 1
    N = N - (c * 8)
    print str(int(f(N)[0]) + (c * 8)) + f(N)[1:]