k = raw_input().split()
a, b = int(k[0]), int(k[1])
m = int(raw_input())
res = ""

l = []
for i in range(m):
    l.append(int(raw_input()))

def canPlay(a,b,n):
    #print("Can play", a, b, n, n >= a or n >= b)
    if n >= a or n >= b:
        return True
    return False

def subSim(a, b, n, scenario, wins):
    if scenario == 1:
        n -= a
        if canPlay(a, b, n):
            n -= a
            if canPlay(a, b, n):
                return runSim(a, b, n, wins)
        else:
            wins[a] += wins[a]
            return wins
    elif scenario == 2:
        n -= b
        if canPlay(a, b, n):
            n -= a
            if canPlay(a, b, n):
                return runSim(a, b, n, wins)
        else:
            wins[b] += wins[b]
            return wins
    elif scenario == 3:
        n -= a
        if canPlay(a, b, n):
            n -= b
            if canPlay(a, b, n):
                return runSim(a, b, n, wins)
        else:
            wins[a] += wins[a]
            return wins
    elif scenario == 4:
        n -= b
        if canPlay(a, b, n):
            n -= b
            if canPlay(a, b, n):
                return runSim(a, b, n, wins)
        else:
            wins[b] += wins[b]
            return wins
def runSim(a, b, n, wins):
    #print("Running sim for", a,b,n,wins)
    subSim(a,b,n,1,wins)
    subSim(a,b,n,2,wins)
    subSim(a,b,n,3,wins)
    subSim(a,b,n,4,wins)

def play(a,b,n):
    if max(a,b) <= n:
        wins = dict()
        wins[a] = 0
        wins[b] = 0
        runSim(a,b,n,wins)
        if wins[a] > wins[b]:
            n -= a
        else:
            n -= b
    else:
        n -= min(a,b)
    return n

for n in l:
    print("N", n)
    winner = "0"
    while True:
        if canPlay(a,b,n):
            n = play(a,b,n)
        else:
            winner = "2"
            break
        if canPlay(a,b,n):
            n = play(a,b,n)
        else:
            winner = "1"
            break
    print("Winner is", winner)
    res += winner

print(res)

"""
2 5
4
6
17
29
41
"""

