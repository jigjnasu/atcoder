/*
  Contest 141
  C - Attack Survival
  Rakesh Kumar --> 16/10/2020
 */

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int n = 0, k = 0, q = 0;
    std::cin >> n >> k >> q;
    std::unordered_map<int, int> sahi_jawab;
    for (int i = 0; i < q; ++i) {
        int e = 0;
        std::cin >> e;
        ++sahi_jawab[e];
    }
    for (int i = 1; i <= n; ++i)
        std::cout << ((k - q + sahi_jawab[i]) > 0 ? "Yes" : "No") << std::endl;

    return 0;
}
