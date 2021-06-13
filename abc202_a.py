'''
  Contest 202
  A - Three Dice
  Rakesh Kumar --> 13/06/2021
'''

def solve():
    a,b,c = map(int, input().split())
    print(6-a+1 + 6-b+1 + 6-c+1)

if __name__ == '__main__':
    solve()
