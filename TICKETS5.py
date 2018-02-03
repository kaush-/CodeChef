for _ in xrange(int(raw_input())):
	S = raw_input().replace('', ' ').split()
	if len(set(S)) > 2 or len(set(S)) < 2:
		print 'NO'
		continue
	
	A = S[0]
	B = S[1]
	flag = 0
	for i in xrange(len(S)):
		if (i%2 == 0 and S[i] != A) or (i%2 != 0 and S[i] != B):
			flag = 1
			break
	if flag == 0:
		print 'YES'
	else:
		print 'NO'