'''
  Contest 206
  C - POW
  Rakesh Kumar --> 18/10/2021
'''

import math

def solve():
    n = int(input())
    c = math.floor(n * 1.08)
    if c < 206:
        print('Yay!')
    elif c > 206:
        print(':(')
    else:
        print('so-so')

if __name__ == '__main__':
    solve()