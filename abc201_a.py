
'''
  Contest 201
  A - Tiny Arithmetic Sequence
  Rakesh Kumar --> 05/06/2021
'''

def solve():
    a = list(map(int, input().split()))
    a.sort()
    if a[1]-a[0] == a[2]-a[1]:
        print('Yes')
    else:
        print('No')

if __name__ == '__main__':
    solve()
