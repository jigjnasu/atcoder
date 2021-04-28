'''
  Contest 199
  A - Square Inequality
  Rakesh Kumar --> 29/04/2021
'''

def solve():
    a = list(map(int, input().split()))
    if a[0]* a[0] + a[1]*a[1] < a[2]*a[2]:
        print('Yes')
    else:
        print('No')

if __name__=='__main__':
    solve()
