for _ in range(int(raw_input())):
    _ = raw_input()
    B = raw_input().replace("", " ").split()
    B.sort()
    print "".join(B)