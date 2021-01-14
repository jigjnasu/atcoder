'''
  Contest 188
  A - Three-Point Shot
  Rakesh Kumar --> 15/01/2021
'''

def solve():
    x, y = map(int, input().split())
    if min(x, y) + 3 > max(x, y):
        print('Yes')
    else:
        print('No')

if __name__ == '__main__':
    solve()
