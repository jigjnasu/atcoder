/*
  Contest 162
  A - Lucky 7
  Rakesh Kumar --> 18/11/2020
 */

#include <bits/stdc++.h>

using ull = unsigned long long int;

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    ull n = 0;
    std::cin >> n;

    ull s = 0;
    for (ull i = 1; i <= n; ++i)
        if (!(i % 3 == 0 || i % 5 == 0))
            s += i;
    std::cout << s << std::endl;

    return 0;
}
