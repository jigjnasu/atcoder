'''
  Contest 193
  A - Discount
  Rakesh Kumar --> 14/03/2021
'''

def solve():
    a, b = map(int, input().split())
    print(((a - b) / a) * 100)

if __name__ == '__main__':
    solve()
