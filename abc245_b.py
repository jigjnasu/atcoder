'''
  Contest 245
  B - Mex
  Rakesh Kumar
'''

def solve():
    n = int(input())
    ank = list(map(int, input().split()))
    
    sankhya = [0] * 2001
    for e in ank:
        sankhya[e] += 1
    print(sankhya.index(0))

if __name__ == '__main__':
    solve()