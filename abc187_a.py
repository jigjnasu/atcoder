'''
  Contest 187
  A - Large Digits
  Rakesh Kumar --> 11/01/2021
'''

def solve():
    a, b = map(str, input().split())
    sa = 0
    for c in a:
        sa += ord(c) - ord('0')
    sb = 0
    for c in b:
        sb += ord(c) - ord('0')
    print(max(sa, sb))

if __name__ == '__main__':
    solve()
