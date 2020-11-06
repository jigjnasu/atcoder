/*
  Contest 155
  C - Poll
  Rakesh Kumar --> 07/11/2020
 */

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int n = 0;
    std::cin >> n;
    std::unordered_map<std::string, int> dict;
    int max = 0;
    while (n--) {
        std::string s;
        std::cin >> s;
        ++dict[s];
        max = std::max(max, dict[s]);
    }
    std::vector<std::string> winners;
    for (const auto& it : dict) {
        if (it.second == max)
            winners.emplace_back(it.first);
    }
    std::sort(winners.begin(), winners.end());
    for (const std::string& s : winners)
        std::cout << s << std::endl;

    return 0;
}
