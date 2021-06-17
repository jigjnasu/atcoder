'''
  Contest 205
  C - POW
  Rakesh Kumar --> 16/06/2021
'''

def solve():
    a,b,c = map(int, input().split())
    if c & 1 == 0:
        a = abs(a)
        b = abs(b)
    if a == b:
        print('=')
    elif a > b:
        print('>')
    else:
        print('<')

if __name__ == '__main__':
    solve()
