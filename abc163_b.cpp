/*
  Contest 163
  B - Homework
  Rakesh Kumar --> 20/11/2020
 */

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int n = 0, m = 0;
    std::cin >> n >> m;
    int t = 0;
    while (m--) {
        int d = 0;
        std::cin >> d;
        t += d;
    }
    std::cout << (n - t < 0 ? -1 : n - t) << std::endl;

    return 0;
}
