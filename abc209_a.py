'''
  Contest 209
  A - Counting
  Rakesh Kumar --> 19/10/2021
'''

def solve():
    arr = [int(x) for x in input().split()]
    r = 0
    if arr[1] > arr[0]:
        r = arr[1] - arr[0] + 1
    print(r)

if __name__ == '__main__':
    solve()

