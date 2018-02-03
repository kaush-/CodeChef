for _ in range(int(raw_input())):
	A = raw_input().split()
	B = raw_input().split()
	count = 0
	for b in B:
		if b in A:
			count+=1
	
	if count >= 2:
		print 'similar'
	else:
		print 'dissimilar'