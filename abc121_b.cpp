/*
  Contest 121
  B - Can you solve this?
  Rakesh Kumar --> 30/09/2020
 */

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int n = 0, m = 0, c = 0;
    std::cin >> n >> m >> c;
    std::vector<int> base;
    for (int i = 0; i < m; ++i) {
        int e = 0;
        std::cin >> e;
        base.emplace_back(e);
    }
    int count = 0;
    while(n--) {
        int total = c;
        for (int i = 0; i < m; ++i) {
            int e = 0;
            std::cin >> e;
            total += (e * base[i]);
        }
        if (total > 0)
            ++count;
    }
    std::cout << count << std::endl;

    return 0;
}
