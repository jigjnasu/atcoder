'''
  Contest 209
  B - Can you buy them all?
  Rakesh Kumar --> 19/10/2021
'''

def solve():
    arr = [int(x) for x in input().split()]
    s = sum([int(x) for x in input().split()]) - (arr[0] >> 1)
    if s <= arr[1]:
        print('Yes')
    else:
        print('No')

if __name__ == '__main__':
    solve()