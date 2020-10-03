/*
  Contest 132
  B - Ordinary Number
  Rakesh Kumar --> 03/10/2020
 */

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int n = 0;
    std::cin >> n;
    std::vector<int> v;
    while (n--) {
        int e = 0;
        std::cin >> e;
        v.emplace_back(e);
    }

    int count = 0;
    for (std::size_t i = 1; i < v.size() - 1; ++i)
        if ((v[i] > v[i - 1] && v[i] < v[i + 1]) ||
            (v[i] < v[i - 1] && v[i] > v[i + 1]))
            ++count;
    std::cout << count << std::endl;

    return 0;
}
