/*
  Contest 220
  B - Base K
  Rakesh Kumar --> 01/11/2021
*/

#include <bits/stdc++.h>

using ll = unsigned long long int;

inline ll convert(const std::string& n, int b) {
    int r = 0;
    for (int i = n.size() - 1; i >= 0; --i)
        r += std::pow(b, n.size() - 1 - i) * (n[i] - '0');
    return r;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int k = 0;
    std::cin >> k;
    std::string a, b;
    std::cin >> a >> b;

    std::cout << convert(a, k) * convert(b, k) << std::endl;

    return 0;
}

