for _ in range(int(raw_input())):
	X = raw_input()
	Y = raw_input()
	
	ans = ''
	for i in range(len(X)):
		if X[i] == Y[i]:
			if X[i] == 'W':
				ans = ans + 'B'
			else:
				ans = ans + 'W'
		else:
			ans = ans + 'W'
	print ans