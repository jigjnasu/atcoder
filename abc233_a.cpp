/*
  Contest 233
  A - 10yen Stamp
  Rakesh Kumar
*/

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int x = 0, y = 0, r = 0;
    std::cin >> x >> y;
    if (x < y)
        r = std::ceil((y - x) / 10.0f);
    std::cout << r << std::endl;

    return 0;
}