'''
  Contest 176
  A - Takoyaki
  Rakesh Kumar --> 25/12/2020
'''

import math

def solve():
    p = list(map(int, input().split()))
    print(math.ceil(p[0] / p[1]) * p[2])

if __name__ == '__main__':
    solve()
