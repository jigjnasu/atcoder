/*
  Contest 120
  B - K-th Common Divisor
  Rakesh Kumar --> 30/09/2020
 */

#include <bits/stdc++.h>

inline std::vector<int> divs(int a, int b) {
    std::vector<int> d = {1};
    for (int i = 2; i <= std::min(a, b); ++i)
        if (a % i == 0 && b % i == 0)
            d.push_back(i);
    std::sort(d.rbegin(), d.rend());
    return d;
}

inline void print(const std::vector<int>& v) {
    std::cout << "---------------------------------------------" << std::endl;
    for (int e : v)
        std::cout << e << " ";
    std::cout << std::endl;
    std::cout << "---------------------------------------------" << std::endl;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int a = 0, b = 0, k = 0;
    std::cin >> a >> b >> k;
    std::cout << divs(a, b)[k - 1] << std::endl;

    return 0;
}
