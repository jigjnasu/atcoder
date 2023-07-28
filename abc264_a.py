'''
  Contest 264
  A - "atcoder".substr()
  Rakesh Kumar
'''

def solve():
    s, e = map(int, input().split())
    print('atcoder'[s - 1 : e])
    
if __name__ == '__main__':
    solve()