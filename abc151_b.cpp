/*
  Contest 151
  B - Achieve the Goal
  Rakesh Kumar --> 25/10/2020
 */

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int n = 0, k = 0, m = 0;
    std::cin >> n >> k >> m;
    int total = 0;
    for (int i = 1; i < n; ++i) {
        int s = 0;
        std::cin >> s;
        total += s;
    }
    const int score = std::max(0, (m * n) - total);
    if (score <= k)
        std::cout << score << std::endl;
    else
        std::cout << -1 << std::endl;

    return 0;
}
