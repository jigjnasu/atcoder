/*
    Contest 242
    A - T-shirt
    Rakesh Kumar
*/
    
#include <bits/stdc++.h>
    
int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    double a = 0.0f, b = 0.0f, c = 0.0f, x = 0.0f;
    std::cin >> a >> b >> c >> x;
    if (x <= a) {
        std::cout << 1 << std::endl;
    } else if (x > a && x <= b) {
        std::cout.precision(9);
        std::cout << c / (b - a) << std::endl;
    } else {
        std::cout << 0 << std::endl;
    }
    
    return 0;
}