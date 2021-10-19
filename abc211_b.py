'''
  Contest 211
  B - Cycle Hit
  Rakesh Kumar --> 20/10/2021
'''

def solve():
    d = {'H' : False, '2B' : False, '3B' : False, 'HR' : False}
    for i in range(4):
        a = str(input())
        d[a] = True
    for k, v in d.items():
        if not v:
            print('No')
            return
    print('Yes')

if __name__ == '__main__':
    solve()