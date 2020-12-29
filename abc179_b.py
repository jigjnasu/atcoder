'''
  Contest 179
  B - Go to Jail
  Rakesh Kumar --> 30/12/2020
'''

def solve():
    n = int(input())
    max_c = 0
    c = 0
    for i in range(n):
        a, b = map(int, input().split())
        if a == b:
            c += 1
        else:
            max_c = max(max_c, c)
            c = 0
    max_c = max(max_c, c)
    if max_c >= 3:
        print('Yes')
    else:
        print('No')

if __name__ == '__main__':
    solve()
