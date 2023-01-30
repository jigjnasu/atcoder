'''
  Contest 260
  A - A Unique Letter
  Rakesh Kumar
'''

def solve():
    arr = [0] * 26
    s = str(input())
    for c in s:
        ind = ord(c) - ord('a')
        arr[ind] += 1
    for i in range(26):
        if arr[i] == 1:
            print(chr(i + ord('a')))
    
if __name__ == '__main__':
    solve()