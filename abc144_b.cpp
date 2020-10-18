/*
  Contest 144
  B - 81
  Rakesh Kumar --> 18/10/2020
 */

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int n = 0;
    std::cin >> n;
    std::string r = "No";
    for (int a = 1; a <= 9; ++a) {
        for (int b = 1; b <= 9; ++b) {
            if (a * b == n) {
                r = "Yes";
                break;
            }
        }
    }
    std::cout << r << std::endl;

    return 0;
}
