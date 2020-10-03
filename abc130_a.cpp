/*
  Contest 130
  A - Rounding
  Rakesh Kumar --> 03/10/2020
 */

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int x = 0, a = 0;
    std::cin >> x >> a;
    std::cout << (x < a ? 0 : 10) << std::endl;

    return 0;
}
