/*
  Contest 124
  B - Great Ocean View
  Rakesh Kumar --> 01/10/2020
 */

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int n = 0;
    std::cin >> n;
    int max = 0;
    std::cin >> max; --n;
    int count = 1;
    while (n--) {
        int h = 0;
        std::cin >> h;
        if (h >= max) {
            max = h;
            ++count;
        }
    }
    std::cout << count << std::endl;

    return 0;
}
