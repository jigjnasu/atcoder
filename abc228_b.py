'''
  Contest 228
  A - Last Card
  Rakesh Kumar
'''

def solve():
    n, x = map(int, input().split())
    a = [int(x) for x in input().split()]
    d = {}
    
    while True:
        if x in d:
            break
        d[x] = True
        x = a[x -1]
    print(len(d))

if __name__ == '__main__':
    solve()