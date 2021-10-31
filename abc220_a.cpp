/*
  Contest 220
  A - Find Multiple
  Rakesh Kumar --> 01/11/2021
*/

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int a = 0, b = 0, c = 0, i = 1;
    std::cin >> a >> b >> c;
    while (1) {
        if (i * c >= a && i * c <= b) {
            std::cout << i * c << std::endl;
            return 0;
        }
        if (i * c > b) {
            std::cout << "-1" << std::endl;
            return 0;
        }
        ++i;
    }
    std::cout << "-1" << std::endl;
    return 0;
}