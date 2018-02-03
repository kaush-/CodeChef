for _ in xrange(int(raw_input())):
	N, K = map(int, raw_input().split())
	A = map(int, raw_input().split())
	A = sum(A)
	
	if K == 1:
		if A % 2 == 0:
			print 'odd'
		else:
			print'even'
		continue
	
	print 'even'