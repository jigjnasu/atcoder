'''
  Contest 211
  A - Blood Pressure
  Rakesh Kumar --> 20/10/2021
'''

def solve():
    arr = [int(x) for x in input().split()]
    print(((arr[0] - arr[1]) / 3) + arr[1])

if __name__ == '__main__':
    solve()