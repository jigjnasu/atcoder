'''
  Contest 263
  A - Full House
  Rakesh Kumar
'''

def solve():
    a = list(map(int, input().split()))
    s = set(a)
    
    res = 'No'
    if len(s) == 2:
        for v in s:
            if not (a.count(v) == 2 or a.count(v) == 3):
                print('No')
                exit(0)
        res = 'Yes'
    print(res)
    
if __name__ == '__main__':
    solve()