/*
  Contest 170
  A - Five Variables
  Rakesh Kumar --> 17/12/2020
 */

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int v[5] = {0};
    std::cin >> v[0] >> v[1] >> v[2] >> v[3] >> v[4];
    for (int i = 0; i < 5; ++i) {
        if (!v[i]) {
            std::cout << i + 1 << std::endl;
            break;
        }
    }

    return 0;
}
