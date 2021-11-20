'''
  Contest 227
  B - KEYENCE building
  Rakesh Kumar
'''

def solve():
    n = int(input())
    arr = [int(x) for x in input().split()]
    c = 0
    for v in arr:
        a = 1
        b = 1
        f = False
        for a in range(1, 1001):
            for b in range(1, 1001):
                t = 4 * a * b + 3 * a + 3 * b
                if t > v:
                    break
                if t == v:
                    c += 1
                    f = True
                    break
            if f:
                break
    print(n - c)

if __name__ == '__main__':
    solve()