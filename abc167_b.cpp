/*
  Contest 167
  B - Easy Linear Programming
  Rakesh Kumar --> 25/11/2020
 */

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int a = 0, b = 0, c = 0, k = 0;
    std::cin >> a >> b >> c >> k;
    int total = 0;
    total += std::min(k, a);
    k -= std::min(k, a);
    k -= std::min(k, b);
    total += std::min(k, c) * -1;
    std::cout << total << std::endl;

    return 0;
}
