/*
  Contest 143
  C - Slimes
  Rakesh Kumar --> 18/10/2020
 */

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int n = 0;
    std::cin >> n;
    std::cin.ignore();
    std::string s;
    std::getline(std::cin, s);
    int t = 1;
    for (std::size_t i = 1; i < s.size(); ++i)
        if (s[i] != s[i - 1])
            ++t;
    std::cout << t << std::endl;

    return 0;
}
