/*
  Contest 152
  B - Comparing Strings
  Rakesh Kumar --> 26/10/2020
 */

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int a = 0, b = 0;
    std::cin >> a >> b;
    std::string sa(a, b + '0');
    std::string sb(b, a + '0');
    std::cout << (sa < sb ? sa : sb) << std::endl;

    return 0;
}
