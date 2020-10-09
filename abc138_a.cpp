/*
  Contest 138
  A - Red or Not
  Rakesh Kumar --> 09/10/2020
 */

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int a = 0;
    std::cin >> a;
    std::cin.ignore();
    std::string s;
    std::getline(std::cin, s);
    std::cout << (a < 3200 ? "red" : s) << std::endl;

    return 0;
}
