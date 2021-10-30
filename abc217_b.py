'''
  Contest 217
  B - AtCoder Quiz
  Rakesh Kumar --> 31/10/2021
'''

def solve():
    d = {
        'ABC' : False,
        'ARC' : False,
        'AGC' : False,
        'AHC' : False
    }

    for i in range(3):
        s = str(input())
        d[s] = True
    for k in d:
        if d[k] == False:
            print(k)

if __name__ == '__main__':
    solve()