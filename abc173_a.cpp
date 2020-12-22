/*
  Contest 173
  A - Payment
  Rakesh Kumar --> 23/12/2020
 */

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int n = 0, r = 0;
    std::cin >> n;
    if (n % 1000)
        r = 1000 - n % 1000;
    std::cout << r << std::endl;

    return 0;
}
