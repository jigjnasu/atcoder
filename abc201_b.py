'''
  Contest 201
  B - Do you know the second highest mountain?
  Rakesh Kumar --> 05/06/2021
'''

def solve():
    n = int(input())
    a = 0
    b = 0
    sa = ''
    sb = ''
    for _ in range(n):
        s, v = map(str, input().split())
        v = int(v)
        if v > a:
            b = a
            sb = sa
            a = v
            sa = s
        elif v > b:
            b = v
            sb = s
    print(sb)

if __name__ == '__main__':
    solve()
