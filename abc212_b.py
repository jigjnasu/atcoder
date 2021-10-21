'''
  Contest 212
  B - Weak Password
  Rakesh Kumar --> 21/10/2021
'''

def solve():
    p = str(input())
    a, b, c, d = ord(p[0]), ord(p[1]), ord(p[2]), ord(p[3])
    r = 'Strong'
    if 4*a == a+b+c+d:
        r = 'Weak'
    if (b-a in [1,-9]) and (c-b in [1,-9]) and (d-c in [1,-9]):
        r = 'Weak'
    print(r)

if __name__ == '__main__':
    solve()