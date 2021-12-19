'''
  Contest 230
  A - AtCoder Quiz 3
  Rakesh Kumar
'''

def solve():
    n = int(input())
    if n < 42:
        print('AGC{}'.format(str(n).zfill(3)))
    else:
        print('AGC{}'.format(str(n+1).zfill(3)))

if __name__ == '__main__':
    solve()