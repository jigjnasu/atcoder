/*
  Contest 126
  A - Changing a Character
  Rakesh Kumar --> 01/10/2020
 */

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int n = 0, k = 0;
    std::cin >> n >> k;
    std::cin.ignore();
    std::string s;
    std::getline(std::cin, s);
    s[k - 1] += 32;
    std::cout << s << std::endl;

    return 0;
}
