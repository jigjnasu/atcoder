'''
  Contest 193
  B - Play Snuke
  Rakesh Kumar --> 15/03/2021
'''

def solve():
    paisa = 1100000000
    for _ in range(int(input())):
        a, p, x = map(int, input().split())
        if x - a > 0:
            paisa = min(paisa, p)
    if paisa == 1100000000:
        print(-1)
    else:
        print(paisa)

if __name__ == '__main__':
    solve()
