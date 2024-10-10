'''
  Contest 268
  B - Prefix?
  Rakesh Kumar
'''

def solve():
    a = input()
    b = input()
    res = 'No'
    if len(a) <= len(b):
        res = 'Yes' if a == b[:len(b)] else 'No'
    print(res)

if __name__ == '__main__':
    solve()