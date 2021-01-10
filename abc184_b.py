'''
  Contest 184
  A - Determinant
  Rakesh Kumar --> 10/01/2021
'''

def solve():
    n, x = map(int, input().split())
    for c in str(input()):
        if c == 'o':
            x += 1
        else:
            x = max(0, x - 1)
    print(x)

if __name__ == '__main__':
    solve()
