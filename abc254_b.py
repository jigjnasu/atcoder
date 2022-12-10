'''
  Contest 254
  B - Practical Computing
  Rakesh Kumar
'''

def solve():
    n = int(input())
    bheem = []
    bheem.append([1])
    for i in range(2, n + 1):
        b = [1]
        for j in range(1, i):
            ind = len(bheem) - 1
            if j < len(bheem[ind]):
                b.append(bheem[ind][j - 1] + bheem[ind][j])
            else:
                b.append(bheem[ind][j - 1])
        bheem.append(b)
    
    for b in bheem:
        for e in b:
            print(e, end = ' ')
        print()

if __name__ == '__main__':
    solve()