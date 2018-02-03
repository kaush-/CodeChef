def get_sum(A, N, K):
	if K > N:
		K = N
	S = [0]*(N- K +1)
	res = 0
	for i in xrange(K):
		res += A[i]
	S[0] = res
	curr = res
	j = 1
	for i in xrange(K, N):
		curr += A[i] - A[i-K]
		S[j] = curr
		j += 1
	return S


N,K,P = map(int, raw_input().split())

A = map(int, raw_input().split())
comm = raw_input()
S = get_sum(A, N, K)
if K > N: K = N
buff = [-4] * K
ans = max(S)
buff[0] = ans
num = 0
for i in xrange(P):
	if K == N:
		if comm[i] == '!':
			continue
		else:
			print buff[num]
			continue
	elif comm[i] == '!':
		num = (num + 1) % K
		tem = S.pop()
		res = S[0]
		res -= A[K-1]
		A.insert(0, A.pop())
		res += A[0]
		
		if buff[num] == -4:
			if res > ans:
				ans = res
			elif tem == ans:
				ans = max(S)
			buff[num] = ans
		else:
			ans = buff[num]
		S.insert(0, res)
	elif comm[i] == '?':
		print buff[num]
