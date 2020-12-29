'''
  Contest 180
  B - Various distances
  Rakesh Kumar --> 30/12/2020
'''

import math

def solve():
    n = int(input())
    arr = list(map(int, input().split()))
    arr = [abs(i) for i in arr]

    print(sum(arr))
    l = [i * i for i in arr]
    print(math.sqrt(sum(l)))
    print(max(arr))

if __name__ == '__main__':
    solve()
