/*
  Contest 158
  C - Tax Increase
  Rakesh Kumar --> 15/11/2020
 */

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int a = 0, b = 0;
    std::cin >> a >> b;
    int r = -1;
    for (int x = 1; x <= 1000; ++x) {
        if (x * 8 / 100 == a && x * 10 / 100 == b) {
            r = x;
            break;
        }
    }
    std::cout << r << std::endl;

    return 0;
}
