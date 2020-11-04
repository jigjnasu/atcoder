/*
  Contest 153
  B - Common Raccoon vs Monster
  Rakesh Kumar --> 05/11/2020
 */

#include <bits/stdc++.h>

using ll = long long int;

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    ll h = 0, n = 0;
    std::cin >> h >> n;

    ll total = 0;
    while (n--) {
        ll e = 0;
        std::cin >> e;
        total += e;
    }
    std::cout << (total >= h ? "Yes" : "No") << std::endl;

    return 0;
}
