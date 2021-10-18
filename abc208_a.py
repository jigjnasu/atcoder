'''
  Contest 208
  A - Rolling Dice
  Rakesh Kumar --> 19/10/2021
'''

def solve():
    arr = [int(x) for x in input().split()]
    if arr[1] <= arr[0]*6 and arr[0] <= arr[1]:
        print('Yes')
    else:
        print('No')

if __name__ == '__main__':
    solve()