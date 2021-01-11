/*
  Contest 187
  B - Gentle Pairs
  Rakesh Kumar --> 12/01/2021
*/

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int n = 0;
    std::cin >> n;

    std::vector<std::tuple<int, int>> v;
    while (n--) {
        int x = 0, y = 0;
        std::cin >> x >> y;
        v.emplace_back(std::make_tuple(x, y));
    }

    int t = 0;
    for (std::size_t i = 0; i < v.size() - 1; ++i) {
        for (std::size_t j = i + 1; j < v.size(); ++j) {
            if (std::abs(std::get<0>(v[i]) - std::get<0>(v[j])) >=
                std::abs(std::get<1>(v[i]) - std::get<1>(v[j])))
                ++t;
        }
    }
    std::cout << t << std::endl;

    return 0;
}
