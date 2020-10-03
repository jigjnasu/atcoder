/*
  Contest 128
  A - Apple Pie
  Rakesh Kumar --> 03/10/2020
 */

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int a = 0, p = 0;
    std::cin >> a >> p;
    std::cout << (((a * 3) + p) >> 1) << std::endl;

    return 0;
}
