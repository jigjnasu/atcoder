'''
  Contest 191
  A - Vanishing Pitch
  Rakesh Kumar --> 07/02/2021
'''

def solve():
    v, t, s, d = map(int, input().split())
    if d >= v * t and d <= v * s:
        print('No')
    else:
        print('Yes')

if __name__ == '__main__':
    solve()
