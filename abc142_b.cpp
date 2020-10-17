/*
  Contest 142
  B - Roller Coaster
  Rakesh Kumar --> 17/10/2020
 */

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int n = 0, k = 0;
    std::cin >> n >> k;
    int mitr = 0;
    while (n--) {
        int h = 0;
        std::cin >> h;
        mitr += h >= k;
    }
    std::cout << mitr << std::endl;

    return 0;
}
