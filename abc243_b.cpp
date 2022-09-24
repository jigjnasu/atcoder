/*
    Contest 243
    B - Hit and Blow
    Rakesh Kumar
*/
    
#include <bits/stdc++.h>

using ull = unsigned long long int;
    
int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    ull n = 0;
    std::cin >> n;

    std::unordered_map<ull, std::vector<ull>> dict;
    for (ull i = 0; i < n; ++i) {
        ull k = 0;
        std::cin >> k;
        dict[k].emplace_back(i);
    }
    for (ull i = 0; i < n; ++i) {
        ull k = 0;
        std::cin >> k;
        dict[k].emplace_back(i);
    }

    ull f = 0, s = 0;
    for (const auto it : dict) {
        if (it.second.size() == 2) {
            if (it.second[0] == it.second[1])
                ++f;
            else
                ++s;
        }
    }
    std::cout << f << std::endl;
    std::cout << s << std::endl;


    return 0;
}