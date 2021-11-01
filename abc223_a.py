'''
  Contest 223
  A - Exact Price
  Rakesh Kumar --> 02/11/2021
'''

def solve():
    n = int(input())
    if n and n % 100 == 0:
        print('Yes')
    else:
        print('No')

if __name__ == '__main__':
    solve()