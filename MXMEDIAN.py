for _ in xrange(int(raw_input())):
	N = int(raw_input())
	A = map(int, raw_input().split())
	A = sorted(A)
	F = A[:N:]
	B = A[N::]
	ans = []
	print A[N + N/2]
	for i in xrange(N):
		ans.append(F[i])
		ans.append(B[i])
	
	print " ".join([str(x) for x in ans])