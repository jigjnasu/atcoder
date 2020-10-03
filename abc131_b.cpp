/*
  Contest 131
  B - Bite Eating
  Rakesh Kumar --> 03/10/2020
 */

#include <bits/stdc++.h>

inline void print(const std::vector<int>& v) {
    std::cout << "--------------------------------------------" << std::endl;
    for (int s : v)
        std::cout << s << " ";
    std::cout << std::endl;
    std::cout << "--------------------------------------------" << std::endl;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int n = 0, l = 0;
    std::cin >> n >> l;
    int total = 0;
    std::vector<int> v;
    for (int i = 1; i <= n; ++i) {
        const int s = i + l - 1;
        v.emplace_back(s);
        total += s;
    }

    if (v[0] < 0 && v[n - 1] < 0)
        total -= v[n - 1];
    if (v[0] > 0 && v[n - 1] > 0)
        total -= v[0];
    std::cout << total << std::endl;

    return 0;
}
