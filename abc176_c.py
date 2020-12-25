'''
  Contest 176
  C - Step
  Rakesh Kumar --> 25/12/2020
'''

def solve():
    n = int(input())
    arr = list(map(int, input().split()))

    h = arr[0]
    total = 0
    for i in range(1, n):
        if arr[i] <= h:
            total += h - arr[i]
        else:
            h = arr[i]
    print(total)

if __name__ == '__main__':
    solve()
