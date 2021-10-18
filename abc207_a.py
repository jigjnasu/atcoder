'''
  Contest 207
  A - Repression
  Rakesh Kumar --> 18/10/2021
'''

def solve():
    arr = sorted([int(x) for x in input().split()])
    print(arr[2] + arr[1])

if __name__ == '__main__':
    solve()