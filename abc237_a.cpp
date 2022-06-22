/*
    Contest 237
    A - Not Overflow
    Rakesh Kumar
*/
    
#include <bits/stdc++.h>
    
int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    long long n = 0;
    std::cin >> n;
    std::cout << (static_cast<int>(n) == n ? "Yes" : "No") << std::endl;
    return 0;
}