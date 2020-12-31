'''
  Contest 182
  B - Almost GCD
  Rakesh Kumar --> 01/01/2021
'''

def divisors(n, arr):
    c = 0
    for e in arr:
        if e % n == 0:
            c += 1
    return c

def solve():
    n = int(input())
    arr = list(map(int, input().split()))
    m = 0
    v = 0
    for i in range(2, max(arr) + 1):
        c = divisors(i, arr)
        if c > m:
            m = c
            v = i
    print(v)

if __name__ == '__main__':
    solve()
