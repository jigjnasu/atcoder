'''
  Contest 228
  C - Final Day
  Rakesh Kumar
'''

def solve():
    n, k = map(int, input().split())
    m = 0
    a = []
    for _ in range(n):
        s = sum([int(x) for x in input().split()])
        a.append(s)
        m = max(s, m)
    for s in a:
        if abs(s - m) <= 300:
            print('Yes')
        else:
            print('No')    

if __name__ == '__main__':
    solve()