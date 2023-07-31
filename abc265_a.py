'''
  Contest 265
  A - Apple
  Rakesh Kumar
'''

def solve():
    x, y, n = map(int, input().split())
    r1 = n * x
    r2 = (n // 3) * y
    n = n % 3
    r2 += n * x
    r = min(r1, r2)
    print(r)
    
if __name__ == '__main__':
    solve()