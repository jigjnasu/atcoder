'''
  Contest 002
  A - Range Product
  Rakesh Kumar --> 15/01/2021
'''

def solve():
    a, b = map(int, input().split())
    if a > 0 and b > 0:
        print('Positive')
    elif a < 0 and b < 0:
        c = abs(b) - abs(a) + 1
        if c & 1 == 1:
            print('Negative')
        else:
            print('Positive')
    else:
        print('Zero')


if __name__ == '__main__':
    solve()
