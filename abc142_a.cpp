/*
  Contest 141
  A - Odds of Oddness
  Rakesh Kumar --> 17/10/2020
 */

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int n = 0;
    std::cin >> n;
    if (n == 1)
        std::cout << 1 << std::endl;
    else {
        int odds = n >> 1;
        if (n & 1)
            ++odds;
        std::cout << odds / static_cast<double>(n) << std::endl;
    }

    return 0;
}
