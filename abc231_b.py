'''
  Contest 231
  B - Election
  Rakesh Kumar
'''

def solve():
    d = {}
    r = ''
    m = 0
    for _ in range(int(input())):
        k = str(input())
        if k in d:
            d[k] += 1
        else:
            d[k] = 1
        if d[k] > m:
            m = d[k]
            r = k
    print(r)

if __name__ == '__main__':
    solve()