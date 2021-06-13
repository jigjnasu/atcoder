'''
  Contest 202
  B - 180°
  Rakesh Kumar --> 13/06/2021
'''

def solve():
    s = str(input())
    for i in range(len(s) - 1, -1, -1):
        if s[i] == '9':
            print('6', end='')
        elif s[i] == '6':
            print('9', end='')
        else:
            print(s[i], end='')
    print();

if __name__ == '__main__':
    solve()
