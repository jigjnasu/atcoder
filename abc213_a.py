'''
  Contest 213
  A - Bitwise Exclusive Or
  Rakesh Kumar --> 27/10/2021
'''

def solve():
    arr = [int(x) for x in input().split()]
    print(arr[0] ^ arr[1])

if __name__ == '__main__':
    solve()