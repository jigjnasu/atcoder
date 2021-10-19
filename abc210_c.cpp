/*
  Contest 210
  C - Colorful Candies
  Rakesh Kumar --> 20/10/2021
*/

#include <bits/stdc++.h>

using ll = unsigned long long int;

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    ll n = 0, k = 0;
    std::cin >> n >> k;

    std::vector<ll> v;
    while (n--) {
      ll e = 0;
      std::cin >> e;
      v.emplace_back(e);
    }

    ll r = 0, c = 0;
    std::unordered_map<ll, ll> d;
    for(int i = 0; i < static_cast<int>(v.size()); ++i) {
      if (d[v[i]] == 0)
        ++c;
      ++d[v[i]];
      if (i - static_cast<int>(k) >= 0) {
        --d[v[i - k]];
        if (d[v[i - k]] == 0)
          --c;
      }
      r = std::max(r, c);
    }
    std::cout << r << std::endl;
    
    return 0;
}