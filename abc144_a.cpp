/*
  Contest 144
  A - 9x9
  Rakesh Kumar --> 18/10/2020
 */

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int a = 0, b = 0;
    std::cin >> a >> b;
    if (a > 9 || b > 9)
        std::cout << -1 << std::endl;
    else
        std::cout << a * b << std::endl;

    return 0;
}
