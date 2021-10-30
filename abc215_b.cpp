/*
  Contest 215
  B - log2(N)
  Rakesh Kumar --> 31/10/2021
*/

#include <bits/stdc++.h>

using ll = unsigned long long int;

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    ll n = 0;
    std::cin >> n;
    ll r = 1, i = 0;
    while (r * 2 <= n) {
        r *= 2;
        ++i;
    }
    std::cout << i << std::endl;
}