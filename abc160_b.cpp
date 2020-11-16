/*
  Contest 160
  B - Golden Coins
  Rakesh Kumar --> 16/11/2020
 */

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int paisa = 0;
    std::cin >> paisa;
    int sukh = 0;
    while (1) {
        while (paisa >= 500) {
            sukh += 1000;
            paisa -= 500;
        }
        while (paisa >= 5) {
            sukh += 5;
            paisa -= 5;
        }
        break;
    }
    std::cout << sukh << std::endl;

    return 0;
}
