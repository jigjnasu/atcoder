/*
  Contest 118
  A - B +/- A
  Rakesh Kumar --> 28/09/2020
 */

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int a = 0, b = 0;
    std::cin >> a >> b;
    if (b % a == 0)
        std::cout << a + b << std::endl;
    else
        std::cout << b - a << std::endl;

    return 0;
}
