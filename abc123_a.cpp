/*
  Contest 123
  A - Five Antennas
  Rakesh Kumar --> 30/09/2020
 */

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    std::vector<int> v(5, 0);
    int k = 0;
    std::cin >> v[0] >> v[1] >> v[2] >> v[3] >> v[4] >> k;
    std::sort(v.begin(), v.end());
    if (v[4] - v[0] <= k)
        std::cout << "Yay!" << std::endl;
    else
        std::cout << ":(" << std::endl;

    return 0;
}
