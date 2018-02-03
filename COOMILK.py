import re


for _ in range(int(raw_input())):
    N = raw_input()
        
    if re.search("cookie cookie|cookie$", raw_input()):
        print "NO"
    else:
        print "YES"