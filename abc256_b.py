'''
  Contest 256
  B - Batters
  Rakesh Kumar
'''

GHAR = 4

def solve():
    p = 0
    n = int(input())
    arr = list(map(int, input().split()))
    ghar_ke_dwar = [0] * GHAR
    for a in arr:
        ghar_ke_dwar[0] += 1
        for i in range(GHAR - 1, -1, -1):
            if i + a > 3:
                p += ghar_ke_dwar[i]
            else:
                ghar_ke_dwar[i + a] += ghar_ke_dwar[i]
            ghar_ke_dwar[i] = 0
    print(p)
        
if __name__ == '__main__':
    solve()