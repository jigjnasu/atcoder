'''
  Contest 218
  B - qwerty
  Rakesh Kumar --> 31/10/2021
'''

def solve():
    a = [int(x) for x in input().split()]
    for x in a:
        print(chr(ord('a') + (x - 1)), end='')
    print()

if __name__ == '__main__':
    solve()