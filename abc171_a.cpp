/*
  Contest 171
  A - αlphabet
  Rakesh Kumar --> 17/12/2020
 */

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    char c = 0;
    std::cin >> c;
    if (c >= 'a' && c <= 'z')
        std::cout << 'a' << std::endl;
    else
        std::cout << 'A' << std::endl;

    return 0;
}
