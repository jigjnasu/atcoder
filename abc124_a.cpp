/*
  Contest 124
  A - Buttons
  Rakesh Kumar --> 01/10/2020
 */

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int a = 0, b = 0;
    std::cin >> a >> b;
    std::cout << std::max(a + b, std::max((a + a -1), (b + b - 1))) << std::endl;

    return 0;
}
