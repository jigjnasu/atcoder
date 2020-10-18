/*
  Contest 143
  B - TAKOYAKI FESTIVAL 2019
  Rakesh Kumar --> 18/10/2020
 */

#include <bits/stdc++.h>

using ll = long long int;

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int n = 0;
    std::cin >> n;
    std::vector<ll> swad(n, 0);
    while (n--) {
        int d = 0;
        std::cin >> d;
        swad.emplace_back(d);
    }
    ll sampurna_swad = 0;
    for (std::size_t i = 0; i < swad.size() - 1; ++i)
        for (std::size_t j = i + 1; j < swad.size(); ++j)
            sampurna_swad += swad[i] * swad[j];
    std::cout << sampurna_swad << std::endl;

    return 0;
}
