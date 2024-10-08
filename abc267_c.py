'''
  Contest 267
  C - Index × A(Continuous ver.)
  Rakesh Kumar
'''

def solve():
    n, m = map(int, input().split())
    arr = list(map(int, input().split()))
    max_result = -1000000000
    for i in range(n - m + 1):
        result = 0
        for j in range(m):
            result += (j + 1) * arr[i + j]
            if result > max_result:
                max_result = result
    print(max_result)

if __name__ == '__main__':
    solve()