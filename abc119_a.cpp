/*
  Contest 119
  A - Still TBD
  Rakesh Kumar --> 30/09/2020
 */

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    std::string s;
    std::getline(std::cin, s);
    const int mm = std::stoi(s.substr(5, 2));
    const int dd = std::stoi(s.substr(8, 2));
    if (mm <= 4 && dd <= 30)
        std::cout << "Heisei" << std::endl;
    else
        std::cout << "TBD" << std::endl;

    return 0;
}
