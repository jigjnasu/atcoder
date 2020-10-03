/*
  Contest 130
  B - Bounding
  Rakesh Kumar --> 03/10/2020
 */

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int n = 0, x = 0;
    std::cin >> n >> x;
    int d = 0;
    int count = 1;
    while (n--) {
        int dt = 0;
        std::cin >> dt;
        d += dt;
        if (d <= x) ++count;
    }
    std::cout << count << std::endl;

    return 0;
}
