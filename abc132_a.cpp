/*
  Contest 132
  A - Fifty-Fifty
  Rakesh Kumar --> 03/10/2020
 */

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    std::string s;
    std::getline(std::cin, s);
    std::unordered_map<char, int> dict;
    for (char c : s)
        ++dict[c - 'A'];
    std::string result = "Yes";
    for (const auto& p : dict) {
        if (p.second != 2) {
            result = "No";
            break;
        }
    }
    std::cout << result << std::endl;

    return 0;
}
