/*
  Contest 138
  B - Resistors in Parallel
  Rakesh Kumar --> 10/10/2020
 */

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int n = 0;
    std::cin >> n;
    double w = 0.0f;
    while (n--) {
        int v = 0;
        std::cin >> v;
        w += 1 / static_cast<double>(v);
    }
    std::cout << 1 / static_cast<double>(w) << std::endl;

    return 0;
}
