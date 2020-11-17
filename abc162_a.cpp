/*
  Contest 162
  A - Lucky 7
  Rakesh Kumar --> 18/11/2020
 */

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    std::string n;
    std::cin >> n;
    std::cout << (n.find('7') == std::string::npos ? "No" : "Yes") << std::endl;

    return 0;
}
