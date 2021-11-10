'''
  Contest 226
  A - Round decimals
  Rakesh
'''

import math

def solve():
    x = str(input())
    i = x.find('.')
    if x[i + 1] < '5':
        x = math.floor(float(x))
    else:
        x = math.ceil(float(x))
    print(x)

if __name__ == '__main__':
    solve()