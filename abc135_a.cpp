/*
  Contest 135
  A - Harmony
  Rakesh Kumar --> 03/10/2020
 */

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int a = 0, b = 0;
    std::cin >> a >> b;
    const int c = a + b;
    if (c & 1)
        std::cout << "IMPOSSIBLE" << std::endl;
    else
        std::cout << (c >> 1) << std::endl;

    return 0;
}
