'''
  Contest 179
  A - Plural Form
  Rakesh Kumar --> 30/12/2020
'''

def solve():
    s = str(input())
    if s[-1] == 's':
        print(s + 'es')
    else:
        print(s + 's')

if __name__ == '__main__':
    solve()
