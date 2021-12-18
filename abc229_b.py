'''
  Contest 229
  B - Hard Calculation
  Rakesh Kumar
'''

def solve():
    a,b  = map(str, input().split())
    i = len(a) - 1
    j = len(b) - 1
    ans = 'Easy'
    while i >= 0 and j >= 0:
        r = (ord(a[i]) - ord('0')) + (ord(b[j]) - ord('0'))
        if r >= 10:
            ans = 'Hard'
            break
        i -= 1
        j -= 1
    print(ans)

if __name__ == '__main__':
    solve()