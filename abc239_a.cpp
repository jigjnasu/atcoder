/*
    Contest 239
    A - Horizon
    Rakesh Kumar
*/
    
#include <bits/stdc++.h>
    
int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    double h = 0;
    std::cin >> h;
    std::cout << std::setprecision(20) << sqrt(h * 12800000 + h * h) << std::endl;

    return 0;
}