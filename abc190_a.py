'''
  Contest 190
  A - Very Very Primitive Game
  Rakesh Kumar --> 07/02/2021
'''

def solve():
    r = ''
    a, b, c = map(int, input().split())
    if c == 0:
        if b >= a:
            r = 'Aoki'
        else:
            r = 'Takahashi'
    else:
        if a >= b:
            r = 'Takahashi'
        else:
            r = 'Aoki'
    print(r)

if __name__ == '__main__':
    solve()
