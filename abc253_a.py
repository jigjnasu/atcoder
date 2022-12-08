'''
  Contest 253
  A - Median?
  Rakesh Kumar
'''

def solve():
    a, b, c = map(int, input().split())
    if b > a and b > c or b < a and b < c:
        print('No')
    else:
        print('Yes')

if __name__ == '__main__':
    solve()