/*
  Contest 139
  A - Tenki
  Rakesh Kumar --> 14/10/2020
 */

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    std::string s, t;
    std::getline(std::cin, s);
    std::getline(std::cin, t);
    int c = 0;
    for (std::size_t i = 0; i < s.size(); ++i)
        c += s[i] == t[i];
    std::cout << c << std::endl;

    return 0;
}
