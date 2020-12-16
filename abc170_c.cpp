/*
  Contest 170
  C - Forbidden List
  Rakesh Kumar --> 17/12/2020
*/

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int x = 0, n = 0;
    std::cin >> x >> n;

    if (n == 0) {
        std::cout << x << std::endl;
        return 0;
    }

    bool v[200] = {false};
    while (n--) {
        int e = 0;
        std::cin >> e;
        v[e] = true;
    }
    for (int i = 0; i < 101; ++i) {
        if (!v[x - i]) {
            std::cout << x - i << std::endl;
            break;
        }
        if (!v[x + i]) {
            std::cout << x + i << std::endl;
            break;
        }
    }

    return 0;
}
