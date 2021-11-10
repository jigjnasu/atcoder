'''
  Contest 226
  B - Counting Arrays
  Rakesh Kumar
'''

def solve():
    s = set()
    for _ in range(int(input())):
        a = list(map(int, input().split()))
        s.add(str(a))
    print(len(s))

if __name__ == '__main__':
    solve()
