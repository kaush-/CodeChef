for _ in xrange(int(raw_input())):
    acts, ori = raw_input().split()
    total = 0
    for _ in xrange(int(acts)):
        text = raw_input()
        if text.find('CONTEST_WON') == 0:
            bonus = int(text[12:])
            if bonus > 20:
                bonus = 0
            else:
                bonus = 20 - bonus
            total += 300 + bonus
        elif text.find('TOP_CONTRIBUTOR') == 0:
            total += 300
        elif text.find('BUG_FOUND') == 0:
            total += int(text[10:])
        elif text.find('CONTEST_HOSTED') == 0:
            total += 50
    
    if ori == 'INDIAN':
        print total/200
    else:
        print total/400
            