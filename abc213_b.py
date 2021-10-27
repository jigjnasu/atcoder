'''
  Contest 213
  A - Bitwise Exclusive Or
  Rakesh Kumar --> 27/10/2021
'''

def solve():
    n = int(input())
    arr = [int(x) for x in input().split()]
    f = 0
    fp = 0
    s = 0
    sp = 0
    for i in range(len(arr)):
        if arr[i] > f:
            s = f
            sp = fp
            f = arr[i]
            fp = i + 1
        elif arr[i] > s:
            s = arr[i]
            sp = i + 1
    print(sp)

if __name__ == '__main__':
    solve()