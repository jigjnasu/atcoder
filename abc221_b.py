'''
    Contest 221
    B - typo
    Rakesh Kumar --> 01/11/2021
'''
    
def solve():
    s = str(input())
    t = str(input())
    if s == t:
        print('Yes')
    else:
        cnt = 0
        is_adj = False
        for i in range(len(s)):
            if s[i] != t[i]:
                cnt += 1
                if i + 1 < len(s):
                    if s[i + 1] == t[i] and t[i + 1] == s[i]:
                        is_adj = True
        if cnt == 2 and is_adj == True:
            print('Yes')
        else:
            print('No')
    
if __name__ == '__main__':
    solve()