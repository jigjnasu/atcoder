'''
  Contest 261
  A - Intersection
  Rakesh Kumar
'''

def solve():
    arr = list(map(int, input().split()))
    print(max(min(arr[1], arr[3]) - max(arr[0], arr[2]), 0))
    
if __name__ == '__main__':
    solve()