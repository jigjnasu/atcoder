'''
  Contest 257
  A - A to Z String 2
  Rakesh Kumar
'''

def solve():
    n, x = map(int, input().split())
    i = x // n
    if x % n == 0:
        i -= 1
    c = chr(i + ord('A'))
    print(c)
    
if __name__ == '__main__':
    solve()