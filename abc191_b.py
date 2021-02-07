'''
  Contest 191
  B - Remove It
  Rakesh Kumar --> 07/02/2021
'''

def solve():
    n, x = map(int, input().split())
    arr = list(map(int, input().split()))
    for a in arr:
        if a != x:
            print(a, end = ' ')
    print()

if __name__ == '__main__':
    solve()
