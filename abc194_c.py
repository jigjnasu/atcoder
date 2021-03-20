'''
  Contest 194
  C - Squared Error
  Rakesh Kumar --> 21/03/2021
'''

def solve():
    n = int(input())
    a = list(map(int, input().split()))
    sa = 0
    ss = 0
    for e in a:
        sa += e
        ss += e * e
    print(n * ss - sa * sa)

if __name__ == '__main__':
    solve()
