'''
  Contest 261
  A - World Cup
  Rakesh Kumar
'''

def solve():
    wcy = int(input())
    r = wcy % 4
    if r <= 2:
        print(wcy + 2 - r)
    else:
        print(wcy + 3)
    
if __name__ == '__main__':
    solve()