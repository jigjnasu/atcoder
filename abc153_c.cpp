/*
  Contest 153
  C - Fennec vs Monster
  Rakesh Kumar --> 05/11/2020
 */

#include <bits/stdc++.h>

using ll = long long int;

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    ll n = 0, k = 0;
    std::cin >> n >> k;
    std::vector<ll> swasth;
    while (n--) {
        ll h = 0;
        std::cin >> h;
        swasth.emplace_back(h);
    }
    std::sort(swasth.begin(), swasth.end());
    ll total = 0;
    if (k < swasth.size()) {
        for (ll i = 0; i < swasth.size() - k; ++i)
            total += swasth[i];
    }
    std::cout << total << std::endl;

    return 0;
}
