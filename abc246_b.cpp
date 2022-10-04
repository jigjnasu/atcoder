/*
    Contest 246
    B - Get Closer
    Rakesh Kumar
*/
    
#include <bits/stdc++.h>
  
int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    double a = 0.0f, b = 0.0f;
    std::cin >> a >> b;
    double c = std::sqrt(a * a + b * b);
    std::cout << std::fixed << std::setprecision(11) << a / c << " " << b / c << std::endl;

    return 0;
}