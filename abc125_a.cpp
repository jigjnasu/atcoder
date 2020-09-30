/*
  Contest 125
  A - Biscuit Generator
  Rakesh Kumar --> 01/10/2020
 */

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int a = 0, b = 0, t = 0;
    std::cin >> a >> b >> t;
    std::cout << b * (t / a) << std::endl;

    return 0;
}
