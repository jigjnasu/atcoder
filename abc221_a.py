'''
  Contest 221
  A - Seismic magnitude scales
  Rakesh Kumar --> 01/11/2021
'''

def solve():
    a = [int(x) for x in input().split()]
    print(pow(32, a[0] - a[1]))

if __name__ == '__main__':
    solve()