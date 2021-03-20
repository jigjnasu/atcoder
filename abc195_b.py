'''
  Contest 195
  A - Health M Death
  Rakesh Kumar --> 21/03/2021
'''

def solve():
    a, b, w = map(int, input().split())
    w *= 1000
    m, M = 10 ** 10, 0
    for i in range(1, w // a + 1):
        if a * i <= w & w <= b * i:
            m = min(m, i)
            M = max(M, i)
    if M == 0:
        print('UNSATISFIABLE')
    else:
        print(m, M)

if __name__ == '__main__':
    solve()
