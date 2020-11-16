/*
  Contest 160
  A - Coffee
  Rakesh Kumar --> 16/11/2020
 */

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    std::string c;
    std::cin >> c;
    if (c[2] == c[3] && c[4] == c[5])
        std::cout << "Yes" << std::endl;
    else
        std::cout << "No" << std::endl;

    return 0;
}
