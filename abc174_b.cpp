/*
  Contest 174
  B - Distance
  Rakesh Kumar --> 23/12/2020
 */

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int n = 0, d = 0;
    std::cin >> n >> d;

    int c = 0;
    while (n--) {
        double x = 0, y = 0;
        std::cin >> x >> y;
        const double distance = std::sqrt(x * x + y * y);
        if (distance <= d)
            ++c;
    }
    std::cout << c << std::endl;

    return 0;
}
