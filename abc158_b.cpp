/*
  Contest 158
  B - Count Balls
  Rakesh Kumar --> 15/11/2020
 */

#include <bits/stdc++.h>

using ll = long long int;

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    ll n = 0, a = 0, b = 0;
    std::cin >> n >> a >> b;
    std::cout << ((n / (a + b)) * a + std::min(n % (a + b), a)) << std::endl;

    return 0;
}
