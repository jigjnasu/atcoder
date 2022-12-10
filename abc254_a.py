'''
  Contest 254
  A - Last Two Digits
  Rakesh Kumar
'''

def solve():
    s = str(input())
    print(s[len(s) - 2 : len(s)])

if __name__ == '__main__':
    solve()