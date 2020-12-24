'''
  Contest 175
  B - Making Triangle
  Rakesh Kumar --> 24/12/2020
'''

def solve():
    n = int(input())
    v = list(map(int, input().split()))
    v.sort()

    c = 0
    for i in range(n - 2):
        for j in range(i + 1, n - 1):
            for k in range(j + 1, n):
                if v[i] != v[j] and v[j] != v[k]:
                    if v[i] + v[j] > v[k]:
                        c += 1
    print(c)

if __name__ == '__main__':
    solve()


