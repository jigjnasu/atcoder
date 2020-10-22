/*
  Contest 150
  A - 500 Yen Coins
  Rakesh Kumar --> 22/10/2020
 */

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int k = 0, x = 0;
    std::cin >> k >> x;
    if (k * 500 >= x)
        std::cout << "Yes" << std::endl;
    else
        std::cout << "No" << std::endl;

    return 0;
}
