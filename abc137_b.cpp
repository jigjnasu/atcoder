/*
  Contest 137
  B - One Clue
  Rakesh Kumar --> 09/10/2020
 */

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int k = 0, x = 0;
    std::cin >> k >> x;
    for (int i = x - k + 1; i < k + x; ++i)
        std::cout << i << " ";
    std::cout << std::endl;

    return 0;
}
