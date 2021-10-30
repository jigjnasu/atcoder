'''
  Contest 216
  A - Signed Difficulty
  Rakesh Kumar --> 31/10/2021
'''

def solve():
    n = float(input())
    n = n * 10
    d = int(n % 10)
    m = int(n / 10)
    if d <= 2:
        print('{}-'.format(m))
    elif d <= 6:
        print(m)
    else:
        print('{}+'.format(m))

if __name__ == '__main__':
    solve()