'''
  Contest 245
  A - Good morning
  Rakesh Kumar
'''

import datetime

def solve():
    a, b, c, d = map(int, input().split())
    t = datetime.time(a, b, 0)
    a = datetime.time(c, d, 1)
    if t < a:
        print('Takahashi')
    else:
        print('Aoki')

if __name__ == '__main__':
    solve()