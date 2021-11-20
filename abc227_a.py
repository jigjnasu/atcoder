'''
  Contest 227
  A - Last Card
  Rakesh Kumar
'''

def solve():
    n, k, a = map(int, input().split())
    p = (a + k - 1) % n
    if p:
        print(p)
    else:
        print(n)

if __name__ == '__main__':
    solve()