/*
  Contest 151
  C - Welcome to AtCoder
  Rakesh Kumar --> 26/10/2020
 */

#include <bits/stdc++.h>

using ll = long long int;

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    ll n = 0, m = 0, w = 0;
    std::cin >> n >> m;
    std::unordered_map<int, bool> sahi;
    std::unordered_map<int, int> galat;
    while (m--) {
        int q = 0;
        std::string r;
        std::cin >> q >> r;
        if (sahi.find(q) == sahi.end()) {
            if (r == "AC")
                sahi[q] = true;
            else
                ++galat[q];
        }
    }
    for (const auto& it : sahi)
        w += galat[it.first];
    std::cout << sahi.size() << " " << w << std::endl;

    return 0;
}
