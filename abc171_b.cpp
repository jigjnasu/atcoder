/*
  Contest 171
  B - Mix Juice
  Rakesh Kumar --> 17/12/2020
 */

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int n = 0, k = 0;
    std::cin >> n >> k;
    std::vector<int> v;

    while (n--) {
        int p = 0;
        std::cin >> p;
        v.emplace_back(p);
    }
    std::sort(v.begin(), v.end());

    int total = 0;
    for (int i = 0; i < k; ++i)
        total += v[i];
    std::cout << total << std::endl;

    return 0;
}
