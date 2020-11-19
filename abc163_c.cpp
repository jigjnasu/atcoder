/*
  Contest 163
  C - management
  Rakesh Kumar --> 20/11/2020
 */

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int n = 0, m = 0;
    std::cin >> n; m = n; --n;

    std::unordered_map<int, int> dict;
    while (n--) {
        int s = 0;
        std::cin >> s;
        ++dict[s];
    }
    for (int i = 1; i <= m; ++i)
        std::cout << dict[i] << std::endl;

    return 0;
}
