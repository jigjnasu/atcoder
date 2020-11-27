/*
  Contest 169
  C - Multiplication 3
  Rakesh Kumar --> 28/11/2020
 */

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    long double a = 0, b = 0;
    std::cin >> a >> b;
    std::cout << static_cast<long long>(a * b + 0.0001) << std::endl;

    return 0;
}
