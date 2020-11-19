/*
  Contest 164
  A - Sheep and Wolves
  Rakesh Kumar --> 20/11/2020
 */

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int s = 0, w = 0;
    std::cin >> s >> w;
    std::cout << (w >= s ? "unsafe" : "safe") << std::endl;

    return 0;
}
