/*
  Contest 086
  B - 1 21
  Rakesh Kumar --> 18/09/2020
 */

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int a = 0, b = 0;
    std::cin >> a >> b;
    int c = std::stoi(std::to_string(a) + std::to_string(b));
    double d = std::sqrt(c);
    if (d == std::floor(d))
        std::cout << "Yes" << std::endl;
    else
        std::cout << "No" << std::endl;

    return 0;
}
