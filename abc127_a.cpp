/*
  Contest 127
  A - Ferris Wheel
  Rakesh Kumar --> 03/10/2020
 */

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int a = 0, b = 0;
    std::cin >> a >> b;
    int shulk = 0;
    if (a >= 6 && a <= 12)
        shulk = b >> 1;
    if (a > 12)
        shulk = b;
    std::cout << shulk << std::endl;

    return 0;
}
