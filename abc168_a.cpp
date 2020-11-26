/*
  Contest 168
  A - ∴ (Therefore)
  Rakesh Kumar --> 27/11/2020
 */

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int n = 0;
    std::cin >> n;
    const int t = n % 10;
    switch (t) {
    case 2:
    case 4:
    case 5:
    case 7:
    case 9:
        std::cout << "hon" << std::endl;
        break;
    case 0:
    case 1:
    case 6:
    case 8:
        std::cout << "pon" << std::endl;
        break;
    case 3:
        std::cout << "bon" << std::endl;
        break;
    default: break;
    }

    return 0;
}
