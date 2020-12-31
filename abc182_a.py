'''
  Contest 181
  A - twiblr
  Rakesh Kumar --> 01/01/2021
'''

def solve():
    a, b = map(int, input().split())
    print((a << 1)+ 100 - b)

if __name__ == '__main__':
    solve()
