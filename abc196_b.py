'''
  Contest 196
  B - Round Down
  Rakesh Kumar --> 21/03/2021
'''

def solve():
    x = str(input())
    pos = x.find('.')
    if pos == -1:
        print(x)
    else:
        print(x[:pos])

if __name__ == '__main__':
    solve()
