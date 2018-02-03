N,Q = map(int, raw_input().split())
A = map(int, raw_input().split())
A = sorted(A)
low = A[0]
high = A[N-1]
for _ in range(Q):
	t = int(raw_input())
	if t >= low and t <= high:
		print 'Yes'
	else:
		print 'No'