/*
  Contest 166
  B - Trick or Treat
  Rakesh Kumar --> 23/11/2020
 */

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int n = 0, k = 0;
    std::cin >> n >> k;

    std::vector<bool> dict(n, false);
    while (k--) {
        int d = 0;
        std::cin >> d;
        while (d--) {
            int s = 0;
            std::cin >> s;
            dict[s - 1] = true;
        }
    }
    int m = 0;
    for (bool b : dict)
        if (!b) ++m;
    std::cout << m << std::endl;


    return 0;
}
