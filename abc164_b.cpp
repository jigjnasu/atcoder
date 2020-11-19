/*
  Contest 164
  B - Battle
  Rakesh Kumar --> 20/11/2020
 */

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int a = 0, b = 0, c = 0, d =  0;
    std::cin >> a >> b >> c >> d;
    while (1) {
        c -= b;
        if (c <= 0) {
            std::cout << "Yes" << std::endl;
            break;
        }
        a -= d;
        if (a <= 0) {
            std::cout << "No" << std::endl;
            break;
        }
    }

    return 0;
}
