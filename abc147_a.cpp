/*
  Contest 147
  A - Blackjack
  Rakesh Kumar --> 21/10/2020
 */

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int a[3] = {0};
    std::cin >> a[0] >> a[1] >> a[2];
    if (a[0] + a[1] + a[2] >= 22)
        std::cout << "bust" << std::endl;
    else
        std::cout << "win" << std::endl;

    return 0;
}
