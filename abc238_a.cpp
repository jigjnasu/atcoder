/*
    Contest 238
    A - Exponential or Quadratic
    Rakesh Kumar
*/
    
#include <bits/stdc++.h>
    
int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int n = 0;
    std::cin >> n;
    std::cout << ((n > 4 || n == 1) ? "Yes" : "No") << std::endl;

    return 0;
}