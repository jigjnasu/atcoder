'''
  Contest 190
  B - Magic 3
  Rakesh Kumar --> 07/02/2021
'''

def solve():
    n, s, d = map(int, input().split())
    r = 'No'
    for _ in range(n):
        x, y = map(int, input().split())
        if x < s and y > d:
            r = 'Yes'
    print(r)

if __name__ == '__main__':
    solve()
