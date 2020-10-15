/*
  Contest 139
  C - Lower
  Rakesh Kumar --> 16/10/2020
 */

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int n = 0;
    std::cin >> n;
    int p = 0;
    std::cin >> p; --n;
    int max = 0;
    int c = 0;
    while (n--) {
        int h = 0;
        std::cin >> h;
        if (h > p) {
            max = std::max(max, c);
            c = 0;
        } else {
            ++c;
        }
        p = h;
    }
    max = std::max(max, c);
    std::cout << max << std::endl;

    return 0;
}
