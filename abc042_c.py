'''
  C - Iroha's Obsession
  Contest 042
  Rakesh Kumar --> 02/08/2020
'''

def like(n, digits):
    n = str(n)
    for d in n:
        if int(d) in digits:
            return False
    return True

def solve():
    n, d = map(int, input().split())
    digits = list(map(int, input().split()))
    while True:
        if like(n, digits):
            print(n)
            break
        else:
            n += 1

if __name__ == '__main__':
    solve()

