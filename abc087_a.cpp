/*
  Contest 087
  A - Buying Sweets
  Rakesh Kumar --> 18/09/2020
 */

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int x = 0, a = 0, b = 0;
    std::cin >> x >> a >> b;
    std::cout << x - a - (b * ((x - a) / b)) << std::endl;

    return 0;
}
