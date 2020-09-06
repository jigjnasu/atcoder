/*
  Contest 064
  B - Traveling AtCoDeer Problem
  Rakesh Kumar --> 31/08/2020
 */

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int n = 0;
    std::cin >> n;
    int a = 0;
    std::cin >> a; --n;
    int min = 0, max = 0;
    min = max = a;
    while (n--) {
        std::cin >> a;
        min = std::min(a, min);
        max = std::max(a, max);
    }
    std::cout << max - min << std::endl;

    return 0;
}
