/*
  Contest 222
  B - Failing Grade
  Rakesh Kumar --> 01/11/2021
*/

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int n = 0, p = 0;
    std::cin >> n >> p;

    int r = 0;
    while (n--) {
        int s = 0;
        std::cin >> s;
        if (s < p)
            ++r;
    }
    std::cout << r << std::endl;

    return 0;
}