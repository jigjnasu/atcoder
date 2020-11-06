/*
  Contest 155
  B - Papers, Please
  Rakesh Kumar --> 07/11/2020
 */

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int n = 0;
    std::cin >> n;
    std::string r = "APPROVED";
    while (n--) {
        int e = 0;
        std::cin >> e;
        if ((e & 1) == 0) {
            if (!(e % 3 == 0 || e % 5 == 0))
                r = "DENIED";
        }
    }
    std::cout << r << std::endl;

    return 0;
}
