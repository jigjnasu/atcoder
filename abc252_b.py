'''
  Contest 252
  B - Takahashi's Failure
  Rakesh Kumar
'''

def solve():
    n, k = map(int, input().split())
    swad = list(map(int, input().split()))
    sabse_swadist_bhojan = max(swad)
    
    napasand = list(map(int, input().split()))
    res = 'No'
    for n in napasand:
        if swad[n - 1] == sabse_swadist_bhojan:
            res = 'Yes'
            break
    print(res)

if __name__ == '__main__':
    solve()