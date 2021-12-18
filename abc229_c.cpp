/*
  Contest 229
  C - Cheese
  Rakesh Kumar
*/

#include <bits/stdc++.h>

using ll = unsigned long long int;

inline void print(const std::vector<std::vector<int>>& v) {
    std::cout << "--------------------------------------------------------------" << std::endl;
    for (const auto& i : v)
        std::cout << i[0] << " " << i[1] << std::endl;
    std::cout << "--------------------------------------------------------------" << std::endl;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    ll n = 0, w = 0;
    std::cin >> n >> w;
    std::vector<std::vector<ll>> makhan;
    for (ll i = 0; i < n; ++i) {
        std::vector<ll> item;
        ll d = 0, w = 0;
        std::cin >> d >> w;
        item.emplace_back(d);
        item.emplace_back(w);
        makhan.emplace_back(item);
    }
    std::sort(makhan.begin(), makhan.end(), [](const std::vector<ll>& a, const std::vector<ll>& b) {
        return a[0] > b[0];
    });

    //print(makhan);

    std::size_t i = 0;
    ll swad = 0;
    while (w > 0 && i < makhan.size()) {
        const ll kitna = std::min(w, makhan[i][1]);
        w -= kitna;
        swad += kitna * makhan[i][0];
        ++i;
    }
    std::cout << swad << std::endl;

    return 0;
}

