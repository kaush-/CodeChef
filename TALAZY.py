for _ in xrange(int(raw_input())):
	N, B, M = map(int, raw_input().split())
	time = 0
	while N >= 1:
		if N % 2 == 0:
			solve = N / 2
		else:
			solve = (N+1)/2
		
		N = N - solve
		time += solve * M
		if N != 0:
			time += B
		
		M = 2*M
	
	print time