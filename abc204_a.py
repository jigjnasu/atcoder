'''
  Contest 204
  A - Rock-paper-scissors
  Rakesh Kumar --> 15/06/2021
'''

def solve():
    a,b = map(int, input().split())
    if a == b:
        print(a)
    else:
        print(3-(a+b))

if __name__ == '__main__':
    solve()
