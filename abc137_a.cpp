/*
  Contest 137
  A - +-x
  Rakesh Kumar --> 09/10/2020
 */

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int a = 0, b = 0;
    std::cin >> a >> b;
    std::cout << std::max(a + b, std::max(a - b, a * b)) << std::endl;

    return 0;
}
