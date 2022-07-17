/*
    Contest 239
    B - Integer Division
    Rakesh Kumar
*/
    
#include <bits/stdc++.h>
    
int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    long long x = 0;
    std::cin >> x;
    long long res = 0;
    if (x >= 0 || x % 10 == 0)
        res = x / 10;
    else if (x % 10 != 0)
        res = (x / 10) - 1;
    std::cout << res << std::endl;
    
    return 0;
}