/*
  Contest 165
  A - We Love Golf
  Rakesh Kumar --> 23/11/2020
 */

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int k = 0, a = 0, b = 0;
    std::cin >> k >> a >> b;
    std::string r = "NG";
    for (int i = a; i <= b; ++i) {
        if (i % k == 0) {
            r = "OK";
            break;
        }
    }
    std::cout << r << std::endl;

    return 0;
}
