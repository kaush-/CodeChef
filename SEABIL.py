for _ in xrange(int(raw_input())):
	N, M = map(int, raw_input().split())
	balls = [[1000 for i in xrange(N+1)] for i in xrange(N+1)]
	for i in xrange(M):
		X,Y,Z = map(int, raw_input().split())
		balls[X][Y] = Z
	moves = []
	for i in range(N+1):
		for j in range(N+1):
			if balls[i][j] != 1000:
				if i == j :
					moves.append((i, j, -1, -1, 4*N))
					continue
				if j > i :
					moves.append((i, j, 0, -1, j-i))
					moves.append((i, i, -1, -1, 4*N))
					continue
				if i > j :
					moves.append((i, j, -1, 0, i-j))
					moves.append((j, j, -1, -1, 4*N))
					continue
				
				
			
	if len(moves) > 0:
		size = len(moves)
		if len(moves) > 4*M:
			size = 4*M -1
		print size
		for i in xrange(size):
			print " ".join(str(x) for x in moves[i])
	else:
		print 0
	
			
	
	