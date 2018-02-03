for _ in xrange(int(raw_input())):
	n, m = map(int, raw_input().split())
	if (n*m) % 2 == 0:
		print 'Yes'
	else:
		print 'No'