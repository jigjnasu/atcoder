/*
  Contest 189
  B - Alcoholic
  Rakesh Kumar --> 07/02/2021
*/

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    double n = 0, x = 0;
    std::cin >> n >> x;
    int atyant_sukh = -1;
    double bewda_level = 0.0f;
    for (int i = 1; i <= n; ++i) {
        double a = 0, p = 0;
        std::cin >> a >> p;
        bewda_level += a * p;
        if (atyant_sukh == -1 && bewda_level > (x * 100)) {
            atyant_sukh = i;
        }
    }
    std::cout << atyant_sukh << std::endl;

    return 0;
}
