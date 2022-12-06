'''
  Contest 251
  A - Six Characters
  Rakesh Kumar
'''

import datetime

def solve():
    s = input()
    for i in range(6):
        print(s[i % len(s)], end='')
if __name__ == '__main__':
    solve()