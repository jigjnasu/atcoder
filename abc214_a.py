'''
  Contest 213
  A - New Generation ABC
  Rakesh Kumar --> 27/10/2021
'''

def solve():
    n = int(input())
    if n >= 1 and n <= 125:
        print(4)
    elif n >= 126 and n <= 211:
        print(6)
    else:
        print(8)

if __name__ == '__main__':
    solve()