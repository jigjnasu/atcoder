/*
  Contest 148
  C - Snack
  Rakesh Kumar --> 22/10/2020
 */

#include <bits/stdc++.h>

using ull = unsigned long long int;

inline ull gcd(ull a, ull b) {
    if (a % b == 0)
        return b;
    else
        return gcd(b, a % b);
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    ull a = 0, b = 0;
    std::cin >> a >> b;
    std::cout << a * b / gcd(a, b) << std::endl;

    return 0;
}
