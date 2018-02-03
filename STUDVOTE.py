for _ in range(int(raw_input())):
	N, K = map(int, raw_input().split())
	ans = dict()
	A = map(int, raw_input().split())
	for i in range(len(A)):
		if ans.get(str(A[i]), -2) == -1:
			continue
		if A[i] == i + 1:
			ans[str(A[i])] = -1
		else:
			if ans.get(str(A[i]),-9) == -9:
				ans[str(A[i])] = 1
			else:
				ans[str(A[i])] += 1
				
	count = 0
	for key in ans:
		if ans[key] >= K:
			count += 1
	print count