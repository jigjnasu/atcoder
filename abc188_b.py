'''
  Contest 188
  B - Orthogonality
  Rakesh Kumar --> 15/01/2021
'''

def solve():
    n = int(input())
    a = list(map(int, input().split()))
    b = list(map(int, input().split()))
    r = 0
    for i in range(n):
        r += a[i] * b[i]
    if r == 0:
        print('Yes')
    else:
        print('No')

if __name__ == '__main__':
    solve()
