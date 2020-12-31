'''
  Contest 180
  A - box
  Rakesh Kumar --> 30/12/2020
'''

def solve():
    n = int(input())
    if n & 1 == 1:
        print('Black')
    else:
        print('White')

if __name__ == '__main__':
    solve()
