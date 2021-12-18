'''
  Contest 229
  A - First Grid 
  Rakesh Kumar
'''

def solve():
    s1 = str(input())
    s2 = str(input())
    if (s1 == '#.' and s2 == '.#') or (s1 == '.#' and s2 == '#.'):
        print('No')
    else:
        print('Yes')

if __name__ == '__main__':
    solve()