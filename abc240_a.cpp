/*
    Contest 240
    A - Edge Checker
    Rakesh Kumar
*/
    
#include <bits/stdc++.h>
    
int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int a = 0, b = 0;
    std::cin >> a >> b;
    if (a == 1 && b == 10 || b - a == 1)
        std::cout << "Yes" << std::endl;
    else
        std::cout << "No" << std::endl;
    
    return 0;
}