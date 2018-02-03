#!/usr/bin/python
 
import math
from fractions import gcd
from time import time,clock
from operator import mul
import random
import itertools
#import Queue as queue
#from decimal import *
#import functools
 
#getcontext().prec = 20
 
#from fractions import Fraction
 
#_modulo = 10**9 + 7
 
import copy
 
import heapq
 
def lower_bound(nums, target):
	l, r = 0, len(nums) - 1
	while l <= r:
		mid = l + (r - l) / 2
		if nums[mid] >= target:
			r = mid - 1
		else:
			l = mid + 1
	return l
	
def upper_bound(nums, target):
	l, r = 0, len(nums) - 1
	while l <= r:
		mid = l + (r - l) / 2
		if nums[mid] > target:
			r = mid - 1
		else:
			l = mid + 1
	return l
 
def getStable(A,K):
 
	return len(A) - lower_bound(A,K)
 
def getStable2(D,K):
 
	if ( not -1 in D):
		#consolidate
		_keys = sorted(list(D.keys()))
		_total = 0
		for i in range(len(_keys)-1,-1,-1):
			_total += D[_keys[i]]
			D[_keys[i]] = _total
		D[-1] = _keys
	
	_min = lower_bound(D[-1],K)
	
	if _min == len(D[-1]):
		return 0
	
	return D[D[-1][_min]]
	
	
def naive(A,L,R,K):
	
	
	pre = A[L]
	l = 1
	S = []
	i = L + 1
	while i < R+1:
		if A[i] == pre:
			l += 1
		else:
			S.append(l)
			l = 1
		pre = A[i]
		i += 1
	
	S.append(l)
	S = sorted(S)
	
	return getStable(S, K)
	
def main():
	import sys
	
	
	T = int(raw_input().strip())
	
	for _ in range(T):
		N, Q =  map(int, raw_input().strip().split())
		
		A = map(int, raw_input().strip().split())
		
		indexes = [0]
		sequences = { 0:{} } 
		
		i = 1
		pre = A[0]
		l = 1
		_break = 0
		while i < N:
			if A[i] == pre:
				l += 1
				
			else:
				sequences[i] = copy.deepcopy(sequences[indexes[-1]])
				if (not l in sequences[i]):
					sequences[i][l] = 0
				sequences[i][l] += 1
				
				indexes.append(i)
				
				l = 1
			
			pre = A[i]
			i += 1
 
		
		
		sequences[N] = copy.copy(sequences[indexes[-1]])
		if (not l in sequences[N]):
			sequences[N][l] = 0
		sequences[N][l] += 1
		
		indexes.append(N)
		
		#print indexes
		#print sequences
		
		#print getStable(sequences[N], 1)
		
		for q in range(Q):
			L, R, K = map(int, raw_input().strip().split())
			#print 'N: ', naive(A,L-1,R-1,K)
			
			L = L - 1 
			R = R #- 1
		
			#print L, R
		
			if (L in sequences):
				#print "in L"
				_left = getStable2(sequences[L], K) 
				#print sequences[L]
				#print _left
			else:
				_minL = lower_bound(indexes, L)
				#print _minL
				_add = indexes[_minL] - L
				#print _add
				_left = getStable2(sequences[indexes[_minL]], K)
				if (_add >= K):
					_left -= 1
				
			if (R in sequences):
				#print "in R"
				_right = getStable2(sequences[R], K)
				#print sequences[R]
				#print _right
			else:
				_minR = lower_bound(indexes, R) - 1
				_add = R - indexes[_minR]
				_right = getStable2(sequences[indexes[_minR]], K)
				if (_add >= K):
					_right += 1
 
					
			#print _right
			#print _left
					
			print _right - _left
				
				
				
				
			
		
 
if __name__ == "__main__":
	
	#the_start_time = time()
	
	#test()
	
	main()
	
	#print time() - the_start_time   