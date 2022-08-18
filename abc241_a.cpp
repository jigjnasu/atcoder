/*
    Contest 241
    A - Digit Machine
    Rakesh Kumar
*/
    
#include <bits/stdc++.h>
    
int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    std::vector<int> v;
    for (int i = 0; i < 10; ++i) {
        int e = 0;
        std::cin >> e;
        v.emplace_back(e);
    }
    
    int r = 0;
    for (int i = 0; i < 3; ++i)
        r = v[r];
    std::cout << r << std::endl;
    
    return 0;
}