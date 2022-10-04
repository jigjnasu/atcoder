/*
    Contest 246
    A - Four Points
    Rakesh Kumar
*/
    
#include <bits/stdc++.h>
  
int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    std::unordered_map<int, int> x;
    std::unordered_map<int, int> y;
    for (std::size_t i = 0; i < 3; ++i) {
        int n = 0, m = 0;
        std::cin >> n >> m;
        ++x[n];
        ++y[m];
    }
    
    int n = 0, m = 0;
    for (const auto& it : x)
        if (it.second == 1)
            n = it.first;
    for (const auto& it : y)
        if (it.second == 1)
            m = it.first;
    std::cout << n << " " << m << std::endl;
    return 0;
}