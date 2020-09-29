/*
  Contest 119
  B - Digital Gifts
  Rakesh Kumar --> 30/09/2020
 */

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int n = 0;
    std::cin >> n;
    double total = 0.0f;
    while (n--) {
        double x;
        std::string c;
        std::cin >> x >> c;
        if (c == "BTC")
            total += x * 380000;
        else
            total += x;
    }
    std::cout << total << std::endl;

    return 0;
}
