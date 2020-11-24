/*
  Contest 167
  A - Registration
  Rakesh Kumar --> 24/11/2020
 */

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    std::string s, t;
    std::cin >> s >> t;
    if (s == t.substr(0, s.size()))
        std::cout << "Yes" << std::endl;
    else
        std::cout << "No" << std::endl;

    return 0;
}
