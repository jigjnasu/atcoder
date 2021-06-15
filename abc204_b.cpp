/*
 * Contest 204
 * B - Nuts
 * Rakesh Kumar --> 15/06/2021
 */

#include <bits/stdc++.h>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int n = 0, v = 0;
    std::cin >> n;
    int r = 0;
    while (n--) {
        std::cin >> v;
        r += std::max(0, v-10);
    }
    std::cout << r << std::endl;
    return 0;
}
