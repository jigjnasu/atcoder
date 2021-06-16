'''
  Contest 205
  B - Permutation Check
  Rakesh Kumar --> 16/06/2021
'''

def solve():
    n = int(input())
    a = list(map(int, input().split()))
    s = [False] * n
    for v in a:
        s[v-1]=True
    for v in s:
        if v == False:
            print('No')
            return
    print('Yes')

if __name__ == '__main__':
    solve()
