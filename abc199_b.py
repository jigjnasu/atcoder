'''
  Contest 199
  B - Intersection
  Rakesh Kumar --> 29/04/2021
'''

def solve():
    n = int(input())
    a = list(map(int, input().split()))
    b = list(map(int, input().split()))
    r = min(b) - max(a) + 1
    print(max(r, 0))

if __name__=='__main__':
    solve()
