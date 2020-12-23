/*
  Contest 175
  A - Rainy Season
  Rakesh Kumar --> 24/12/2020
 */

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    std::string s;
    std::cin >> s;
    if (s == "RRR")
        std::cout << 3 << std::endl;
    else if (s == "RRS" || s == "SRR")
        std::cout << 2 << std::endl;
    else if (s.find("R") != std::string::npos)
        std::cout << 1 << std::endl;
    else
        std::cout << 0 << std::endl;

    return 0;
}
