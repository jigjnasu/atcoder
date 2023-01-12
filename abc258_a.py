'''
  Contest 258
  A - When?
  Rakesh Kumar
'''

def solve():
    k = int(input())
    if k >= 60:
        print('22:{:02d}'.format(k-60))
    else:
        print('21:{:02d}'.format(k))
    
if __name__ == '__main__':
    solve()