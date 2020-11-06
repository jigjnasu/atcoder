/*
  Contest 156
  A - Beginner
  Rakesh Kumar --> 07/11/2020
 */

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int n = 0, r = 0;
    std::cin >> n >> r;
    if (n < 10)
        r += 100 * (10 - n);
    std::cout << r << std::endl;

    return 0;
}
