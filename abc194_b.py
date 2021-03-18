'''
  Contest 194
  B - Job Assignment
  Rakesh Kumar --> 19/03/2021
'''

def solve():
    n = int(input())
    al = []
    bl = []
    for i in range(n):
        a, b = map(int, input().split())
        al.append(a)
        bl.append(b)

    o = []
    for i in range(n):
        for j in range(n):
            if i == j:
                o.append(al[i] + bl[i])
            else:
                o.append(max(al[i], bl[j]))
    print(min(o))


if __name__ == '__main__':
    solve()
