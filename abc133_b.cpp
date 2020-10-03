/*
  Contest 133
  B - Good Distance
  Rakesh Kumar --> 03/10/2020
 */

#include <bits/stdc++.h>

inline bool doori(const std::vector<int>& x, const std::vector<int>& y) {
    int d = 0;
    for (std::size_t i = 0; i < x.size(); ++i)
        d += (x[i] - y[i]) * (x[i] - y[i]);
    const double r = std::sqrt(d);
    return std::ceil(r) == r;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int n = 0, d = 0;
    std::cin >> n >> d;
    std::vector<std::vector<int>> brahmaand;
    for (int i = 0; i < n; ++i) {
        std::vector<int> antriksh;
        for (int j = 0; j < d; ++j) {
            int x = 0;
            std::cin >> x;
            antriksh.emplace_back(x);
        }
        brahmaand.emplace_back(antriksh);
    }

    int count = 0;
    for (std::size_t i = 0; i < brahmaand.size() - 1; ++i)
        for (std::size_t j = i + 1; j < brahmaand.size(); ++j)
            if (doori(brahmaand[i], brahmaand[j]))
                ++count;
    std::cout << count << std::endl;

    return 0;
}
