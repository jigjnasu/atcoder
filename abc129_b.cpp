/*
  Contest 129
  B - Balance
  Rakesh Kumar --> 03/10/2020
 */

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int n = 0;
    std::cin >> n;
    std::vector<int> bhaar;
    int kul_bhaar = 0;
    while (n--) {
        int w = 0;
        std::cin >> w;
        kul_bhaar += w;
        bhaar.emplace_back(w);
    }

    int l = 0;
    int r = 0;
    int abs_diff = kul_bhaar;
    for (int w : bhaar) {
        l += w;
        r = kul_bhaar - l;
        abs_diff = std::min(abs_diff, std::abs(l - r));
    }
    std::cout << abs_diff << std::endl;

    return 0;
}
