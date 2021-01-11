'''
  Contest 186
  B - Blocks on Grid
  Rakesh Kumar --> 11/01/2021
'''

def solve():
    n, m = map(int, input().split())
    grid = []
    m = 200
    for r in range(n):
        row = list(map(int, input().split()))
        grid.append(row)
        m = min(m, min(row))
    total = 0
    for row in grid:
        for r in row:
            total += r - m
    print(total)

if __name__ == '__main__':
    solve()
