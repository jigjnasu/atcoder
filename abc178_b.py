'''
  Contest 178
  B - Product Max
  Rakesh Kumar --> 30/12/2020
'''

def solve():
    a, b, c, d = list(map(int, input().split()))
    print(max(a * c, a * d, b * c, b * d))

if __name__ == '__main__':
    solve()
