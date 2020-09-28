/*
  Contest 118
  B - Foods Loved by Everyone
  Rakesh Kumar --> 28/09/2020
 */

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int n = 0, m = 0;
    std::cin >> n >> m;
    std::vector<int> dict(m + 1, 0);
    for (int i = 0; i < n; ++i) {
        int k = 0;
        std::cin >> k;
        while (k--) {
            int f = 0;
            std::cin >> f;
            ++dict[f];
        }
    }

    int count = 0;
    for (int f : dict)
        if (f == n)
            ++count;
    std::cout << count << std::endl;

    return 0;
}
