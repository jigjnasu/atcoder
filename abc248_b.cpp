/*
    Contest 248
    B - Slimes
    Rakesh Kumar
*/
    
#include <bits/stdc++.h>

using ull = unsigned long long int;

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    ull a = 0, b = 0, k = 0;
    std::cin >> a >> b >> k;

    ull i = 0;
    while (a < b) {
        ++i;
        a *= k;
    }
    std::cout << i << std::endl;

    return 0;
}