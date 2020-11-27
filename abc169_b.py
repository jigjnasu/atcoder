'''
  Contest 169
  B - Multiplication 2
  Rakesh Kumar --> 28/11/2020
'''

def solve():
    n = int(input())
    arr = list(map(int, input().split()))
    if 0 in arr:
        print(0)
    else:
        r = 1
        for e in arr:
            r *= e
            if r > 10**18:
                r = -1
                break
        print(r)

if __name__ == '__main__':
    solve()


