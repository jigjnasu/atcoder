/*
  Contest 149
  C - Next Prime
  Rakesh Kumar --> 22/10/2020
 */

#include <bits/stdc++.h>

inline bool is_prime(int x) {
    for (int i = 2; i * i <= x; ++i)
        if (x % i == 0)
            return false;
    return true;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int x = 0;
    std::cin >> x;
    while (!is_prime(x++));
    std::cout << x - 1 << std::endl;

    return 0;
}
