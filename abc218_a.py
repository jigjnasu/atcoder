'''
  Contest 218
  A - Weather Forecast
  Rakesh Kumar --> 31/10/2021
'''

def solve():
    n = int(input())
    s = str(input())
    if s[n - 1] == 'o':
        print('Yes')
    else:
        print('No')

if __name__ == '__main__':
    solve()