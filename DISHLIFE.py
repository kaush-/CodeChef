for _ in xrange(int(raw_input())):
	N,K = map(int, raw_input().split())
	flag = [0]*K
	some = 0
	for _ in xrange(N):
		A = map(int, raw_input().split()[1:])
		temp = 0
		for a in A:
			if flag[a-1] == 0:
				temp = 1
				break
		if temp ==0:
			some = 1
		for a in A:
			flag[a-1] += 1
	
	if 0 in flag:
		print 'sad'
	elif some == 1:
		print 'some'
	else:
		print 'all'