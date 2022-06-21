/*
    Contest 236
    B - Who is missing?
    Rakesh Kumar
*/
    
#include <bits/stdc++.h>
    
int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int n = 0;
    std::cin >> n;
    std::vector<int> v(n, 0);

    for (int i = 0; i < (4 * n) - 1; ++i) {
        int e = 0;
        std::cin >> e;
        ++v[e - 1];
    }

    for (std::size_t i = 0; i < v.size(); ++i) {
        if (v[i] != 4) {
            std::cout << i + 1 << std::endl;
            break;
        }
    }
    
    return 0;
}