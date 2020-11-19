/*
  Contest 164
  C - gacha
  Rakesh Kumar --> 20/11/2020
 */

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int n = 0;
    std::cin >> n;
    std::unordered_map<std::string, bool> dict;
    while (n--) {
        std::string s;
        std::cin >> s;
        dict[s] = true;
    }
    std::cout << dict.size() << std::endl;

    return 0;
}
