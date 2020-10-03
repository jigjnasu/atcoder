/*
  Contest 134
  B - Golden Apple
  Rakesh Kumar --> 03/10/2020
 */

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int n = 0, d = 0;
    std::cin >> n >> d; ++d;
    const double inspectors = n / static_cast<double>((d << 1) - 1);
    std::cout << std::ceil(inspectors) << std::endl;

    return 0;
}
