/*
  Contest 157
  A - Duplex Printing
  Rakesh Kumar --> 08/11/2020
 */

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int n = 0;
    std::cin >> n;
    std::cout << std::ceil(n / static_cast<double>(2)) << std::endl;

    return 0;
}
