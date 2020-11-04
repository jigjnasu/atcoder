/*
  Contest 153
  A - Serval vs Monster
  Rakesh Kumar --> 05/11/2020
 */

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int h = 0, a = 0;
    std::cin >> h >> a;
    std::cout << std::ceil(h / static_cast<double>(a)) << std::endl;

    return 0;
}
