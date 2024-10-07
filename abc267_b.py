'''
  Contest 267
  B - Split?
  Rakesh Kumar
'''

def solve():
    s = input()
    result = False
    cols = [s[6], s[3], str(int(s[7]) or int(s[1])), str(int(s[4]) or int(s[0])), str(int(s[8]) or int(s[2])), s[5], s[9]]
    if s[0] == '0':
        cols = ''.join(cols)

        for ss in ['101', '1001', '10001', '100001', '1000001']:
            pos = cols.find(ss)
            if pos != -1:
                result = True
                break
    print('Yes') if result else print('No')
    
if __name__ == '__main__':
    solve()