/*
  Contest 172
  A - Calc
  Rakesh Kumar --> 22/12/2020
 */

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int a = 0;
    std::cin >> a;
    std::cout << a * (1 + a + a * a) << std::endl;

    return 0;
}
