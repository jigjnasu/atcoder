/*
  Contest 149
  B - Greedy Takahashi
  Rakesh Kumar --> 22/10/2020
 */

#include <bits/stdc++.h>

using ll = long long int;

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    ll a = 0, b = 0, k = 0;
    std::cin >> a >> b >> k;
    if (k > a) {
        k -= a;
        std::cout << "0 " << std::max(static_cast<ll>(0), b - k) << std::endl;
    } else {
        std::cout << a - k << " " << b << std::endl;
    }

    return 0;
}
