'''
  Contest 195
  A - Health M Death
  Rakesh Kumar --> 21/03/2021
'''

def solve():
    m, h = map(int, input().split())
    if h % m == 0:
        print('Yes')
    else:
        print('No')

if __name__ == '__main__':
    solve()
