/*
  Contest 121
  A - White Cells
  Rakesh Kumar --> 30/09/2020
 */

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int R = 0, C = 0;
    std::cin >> R >> C;
    int r = 0, c = 0;
    std::cin >> r >> c;
    std::cout << (R - r) * (C - c) << std::endl;

    return 0;
}
