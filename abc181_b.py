'''
  Contest 181
  B - Trapezoid Sum
  Rakesh Kumar --> 31/12/2020
'''

def solve():
    n = int(input())
    total = 0
    for i in range(n):
        a, b = map(int, input().split())
        sum = (b * (b + 1)) >> 1
        extra = (a * (a - 1)) >> 1
        total += sum - extra
    print(total)

if __name__ == '__main__':
    solve()
