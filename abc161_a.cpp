/*
  Contest 161
  A - ABC Swap
  Rakesh Kumar --> 17/11/2020
 */

#include <bits/stdc++.h>

inline void swap(int& a, int& b) {
    a ^= b;
    b ^= a;
    a ^= b;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int a = 0, b = 0, c = 0;
    std::cin >> a >> b >> c;
    swap(a, b);
    swap(a, c);
    std::cout << a << " " << b << " " << c << std::endl;

    return 0;
}
