/*
  Contest 143
  A - Curtain
  Rakesh Kumar --> 18/10/2020
 */

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int a = 0, b = 0;
    std::cin >> a >> b;
    std::cout << std::max(0, (a - (b << 1))) << std::endl;

    return 0;
}
