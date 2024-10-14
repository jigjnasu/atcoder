'''
  Contest 269
  A - Anyway Takahashi
  Rakesh Kumar
'''

def solve():
    arr = list(map(int, input().split()))
    print((arr[0] + arr[1]) * (arr[2] - arr[3]))

if __name__ == '__main__':
    solve()