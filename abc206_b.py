'''
  Contest 206
  B - Savings
  Rakesh Kumar --> 18/10/2021
'''

def solve():
    n = int(input())
    s = 1
    i = 1
    while True:
        if s >= n:
            print(i)
            break
        i += 1
        s = (i * (i + 1)) >> 1

if __name__ == '__main__':
    solve()