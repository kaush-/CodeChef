for _ in xrange(int(raw_input())):
	A = map(int, raw_input().replace('',' ').split())
	zero = A.count(0)
	one = A.count(1)
	ans = 0
	i = len(A) - 1
	while True:
		if one == 0 or zero == 0 or i == 0:
			break
		if A[i] == 1:
			one -= 1
		else:
			size = 1
			zero -= 1
			while True:
				if i == 0:
					break
				
				if A[i-1] == 1:
					break
				else:
					size += 1
					zero -= 1
					i -= 1
			#print 'Number of Zeros is %d and Ones %d and posi is %d and ans is %d and size is %d' % (zero, one, i, ans, size)
			ans += one + size * one
		i -= 1
			
	print ans
	