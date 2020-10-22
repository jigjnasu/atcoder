/*
  Contest 149
  A - Strings
  Rakesh Kumar --> 22/10/2020
 */

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    std::string s;
    std::getline(std::cin, s);
    std::istringstream iss(s);
    std::string a, b;
    iss >> a >> b;
    std::cout << b << a << std::endl;

    return 0;
}
