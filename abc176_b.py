'''
  Contest 176
  B - Multiple of 9
  Rakesh Kumar --> 25/12/2020
'''

def solve():
    n = str(input())

    num = 0
    for c in n:
        num += int(c)
    if num % 9 == 0:
        print('Yes')
    else:
        print('No')

if __name__ == '__main__':
    solve()
