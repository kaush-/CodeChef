import re

for _ in xrange(int(raw_input())):
	S = raw_input().strip()
	if re.search('1', S):
		if re.search('1[0]+1', S):
			print 'NO'
		else:
			print 'YES'
	else:
		print 'NO'