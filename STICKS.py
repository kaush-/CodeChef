for _ in xrange(int(raw_input())):
	N = int(raw_input())
	A = map(int, raw_input().split())
	
	count = {}
	
	for i in set(A):
		count[i] = 0
	
	for i in A:
		count[i] += 1
	
	count = [(A,B) for (A,B) in count.items() if B > 1]
	if len(count) < 2:
		if len(count) > 0 and count[0][1] <4:
			print -1
			continue
		elif len(count) == 0:
			print -1
			continue
	
	count = sorted(count)[::-1]
	if count[0][1] >= 4:
		print count[0][0] ** 2
	else:
		print count[0][0] * count[1][0]