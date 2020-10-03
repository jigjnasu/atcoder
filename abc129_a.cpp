/*
  Contest 129
  A - Airplane
  Rakesh Kumar --> 03/10/2020
 */

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int p = 0, q = 0, r = 0;
    std::cin >> p >> q >> r;
    std::cout << std::min(p + q, q + r) << std::endl;

    return 0;
}
