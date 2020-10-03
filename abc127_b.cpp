/*
  Contest 127
  B - Algae
  Rakesh Kumar --> 03/10/2020
 */

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int r = 0, d = 0, x = 0;
    std::cin >> r >> d >> x;
    for (int i = 0; i < 10; ++i) {
        const int bhaar = r * x - d;
        std::cout << bhaar << std::endl;
        x = bhaar;
    }

    return 0;
}
