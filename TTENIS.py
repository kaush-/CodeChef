for _ in xrange(int(raw_input())):
	s = raw_input()
	print "WIN" if 2*sum(map(int, s)) > len(s) else "LOSE"