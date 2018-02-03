for _ in xrange(int(raw_input())):
	N, P = map(int, raw_input().split())
	A = map(int, raw_input().split())
	
	S = set([0])
	prefix = 0
	maxim = 0
	count = 0
	for i in xrange(N):
		prefix = (prefix + A[i]) % P
		if maxim == prefix:
			count += 1
		elif maxim < prefix:
			maxim = prefix
			count = 1
		
		temp = [x for x in S if x >= prefix + 1]
		for t in temp:
			if maxim == prefix - t + P:
				count += 1
			elif maxim < prefix - t + P:
				maxim = prefix - t + P
				count = 1
		
		S.add(prefix)
	print maxim, count