'''
  Contest 216
  B - Same Name
  Rakesh Kumar --> 31/10/2021
'''

def solve():
    n = int(input())
    d = {}
    r = 'No'
    for i in range(n):
        s = str(input())
        if s in d:
            r = 'Yes'
        d[s] = True
    print(r)

if __name__ == '__main__':
    solve()