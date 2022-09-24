/*
    Contest 243
    A - Shampoo
    Rakesh Kumar
*/
    
#include <bits/stdc++.h>
    
int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int v = 0, a = 0, b = 0, c = 0;
    std::cin >> v >> a >> b >> c;

    int x = v % (a + b + c);
    if (x < a)
        std::cout << "F" << std::endl;
    else if (x < (a + b))
        std::cout << "M" << std::endl;
    else
        std::cout << "T" << std::endl;
    
    return 0;
}