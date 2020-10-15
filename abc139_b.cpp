/*
  Contest 139
  B - Power Socket
  Rakesh Kumar --> 16/10/2020
 */

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int a = 0, b = 0;
    std::cin >> a >> b;
    if (b == 1)
        std::cout << 0 << std::endl;
    else {
        int s = 1;
        while (1) {
            if ((a * s) - (s - 1) >= b)
                break;
            ++s;
        }
        std::cout << s << std::endl;
    }

    return 0;
}
