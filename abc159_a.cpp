/*
  Contest 159
  A - The Number of Even Pairs
  Rakesh Kumar --> 15/11/2020
 */

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int n = 0, m = 0;
    std::cin >> n >> m;
    std::cout << ((n * (n - 1)) >> 1) +
        ((m * (m - 1)) >> 1) << std::endl;

    return 0;
}
