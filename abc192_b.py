'''
  Contest 192
  B - uNrEaDaBlE sTrInG
  Rakesh Kumar --> 14/03/2021
'''

def solve():
    s = str(input())
    r = 'Yes'
    for i in range(0, len(s), 2):
        if s[i].isupper():
            r = 'No'
            break
    for i in range(1, len(s), 2):
        if s[i].islower():
            r = 'No'
            break
    print(r)

if __name__ == '__main__':
    solve()
