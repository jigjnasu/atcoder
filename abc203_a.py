'''
  Contest 203
  A - Chinchirorin
  Rakesh Kumar --> 15/06/2021
'''

def solve():
    a,b,c = map(int, input().split())
    if a == b:
        print(c)
    elif a == c:
        print(b)
    elif b == c:
        print(a)
    else:
        print(0)

if __name__ == '__main__':
    solve()
