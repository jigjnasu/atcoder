/*
  Contest 128
  B - Guidebook
  Rakesh Kumar --> 03/10/2020
 */

#include <bits/stdc++.h>

using B = std::map<std::string, std::vector<std::pair<int, int>>>;

inline void print(const B& v) {
    for (const auto& m : v)
        for (const auto& p : m.second)
            std::cout << m.first << " -- " << p.second << std::endl;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int n = 0;
    std::cin >> n;
    std::cin.ignore();
    B bhojnalaya;
    for (int i = 1; i <= n; ++i) {
        std::string s;
        std::getline(std::cin, s);
        std::string shub_naam;
        int sthaan = 0;
        std::istringstream iss(s);
        iss >> shub_naam >> sthaan;
        bhojnalaya[shub_naam].emplace_back(std::pair<int, int>(i, sthaan));
    }
    for (auto m : bhojnalaya) {
        std::sort(m.second.begin(), m.second.end(), [](const std::pair<int, int> a,
                                                       const std::pair<int, int> b) {
                                                        return a.second > b.second;
                                                    });
        for (const auto& p : m.second)
            std::cout << p.first << std::endl;
    }

    return 0;
}
