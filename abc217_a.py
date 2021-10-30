'''
  Contest 217
  A - Lexicographic Order
  Rakesh Kumar --> 31/10/2021
'''

def solve():
    arr = [str(x) for x in input().split()]
    if arr[0] < arr[1]:
        print('Yes')
    else:
        print('No')

if __name__ == '__main__':
    solve()