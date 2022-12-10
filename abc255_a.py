'''
  Contest 255
  A - You should output ARC, though this is ABC.
  Rakesh Kumar
'''

def solve():
    r , c = map(int, input().split())
    a = []
    for _ in range(2):
        a.append(list(map(int, input().split())))
    print(a[r - 1][c - 1])

if __name__ == '__main__':
    solve()