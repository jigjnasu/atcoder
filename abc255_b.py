'''
  Contest 255
  B - Light It Up
  Rakesh Kumar
'''

'''
    question based on Euclidean distance
    d(p, q) = sqrt( i = 1 to n summation of (qi - pi) ^ 2)
'''

from math import sqrt

def solve():
    n, k = map(int, input().split())
    lights = list(map(int, input().split()))

    iter = 0
    r = []
    l = []
    for i in range(1, n + 1):
        if iter < len(lights) and i == lights[iter]:
            r.append(list(map(int, input().split())))
            iter += 1
        else:
            l.append(list(map(int, input().split())))

    hyp = 0
    for log in l:
        lambai = 10 ** 1000
        for ros in r:
            lambai = min(lambai, ((log[0] - ros[0]) * (log[0] - ros[0]) + (log[1] - ros[1]) * (log[1] - ros[1])))
        hyp = max(lambai, hyp)
    print(sqrt(hyp))

if __name__ == '__main__':
    solve()