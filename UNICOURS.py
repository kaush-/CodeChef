# cook your code here
for _ in xrange(int(raw_input())):
	n = int(raw_input())
	a = map(int, raw_input().split())
	print n - max(a)