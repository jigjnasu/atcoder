/*
  Contest 168
  B - ... (Triple Dots)
  Rakesh Kumar --> 27/11/2020
 */

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int k = 0;
    std::cin >> k;
    std::string s;
    std::cin >> s;
    if (s.size() <= k)
        std::cout << s << std::endl;
    else
        std::cout << s.substr(0, k) << "..." << std::endl;

    return 0;
}
