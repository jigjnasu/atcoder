'''
  Contest 212
  A - Alloy
  Rakesh Kumar --> 21/10/2021
'''

def solve():
    arr = [int(x) for x in input().split()]
    if arr[0] == 0:
        print('Silver')
    elif arr[1] == 0:
        print('Gold')
    else:
        print('Alloy')

if __name__ == '__main__':
    solve()