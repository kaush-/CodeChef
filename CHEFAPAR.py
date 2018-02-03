#!/usr/bin/python
import re

T = int(raw_input())
for i in range(0,T):
    N = int(raw_input())
    A = re.findall('^[1 ]*(.*)',raw_input())[0]
    N = A.count('0')
    A = A.count('1')
    print (N*1100) + (A*100)
    
    
    