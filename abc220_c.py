'''
  Contest 220
  C - Long Sequence
  Rakesh Kumar --> 31/10/2021
'''

def solve():
    n = int(input())
    arr = [int(x) for x in input().split()]
    x = int(input())
    s = sum(arr)
    cnt = int(x / s)
    s = cnt * s
    cnt *= n
    for a in arr:
      if s > x:
        break
      cnt += 1
      s += a
    print(cnt)

if __name__ == '__main__':
    solve()