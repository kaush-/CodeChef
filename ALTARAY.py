for _ in xrange(int(raw_input())):
	N = int(raw_input())
	A = map(int, raw_input().split())
	ans = [0]*(N-1)
	ans.append(1)
	for i in xrange(N-2,-1,-1):
		if A[i]*A[i+1] < 0:
			ans[i] = ans[i+1] + 1
		else:
			ans[i] = 1
		
	print " ".join(str(x) for x in ans)