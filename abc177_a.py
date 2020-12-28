'''
  Contest 177
  A - Don't be late
  Rakesh Kumar --> 28/12/2020
'''

def solve():
    arr = list(map(int, input().split()))
    if arr[1] * arr[2] >= arr[0]:
        print('Yes')
    else:
        print('No')

if __name__ == '__main__':
    solve()
