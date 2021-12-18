'''
  Contest 228
  A - Last Card
  Rakesh Kumar
'''

def solve():
    s, t, x = map(int, input().split())
    x += 0.5
    if t < s:
        t += 24
    if x < s:
        x += 24
    if x >= s and x <= t:
        print('Yes')
    else:
        print('No')

if __name__ == '__main__':
    solve()