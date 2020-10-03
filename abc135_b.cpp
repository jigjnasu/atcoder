/*
  Contest 135
  B - 0 or 1 Swap
  Rakesh Kumar --> 03/10/2020
 */

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int n = 0;
    std::cin >> n;
    int off_place = 0;
    for (int i = 1; i <= n; ++i) {
        int e = 0;
        std::cin >> e;
        if (e != i)
            ++off_place;
    }
    std::cout << ((off_place == 2 || off_place == 0) ? "YES" : "NO") << std::endl;

    return 0;
}
