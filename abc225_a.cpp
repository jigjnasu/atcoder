/*
  Contest 225
  A - Distinct Strings
  Rakesh Kumar --> 04/11/2021
*/

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    std::set<char> s;
    for (int i = 0; i < 3; ++i) {
        char c;
        std::cin >> c;
        s.insert(c);
    }

    if (s.size() == 3)
        std::cout << 6 << std::endl;
    else if (s.size() == 2)
        std::cout << 3 << std::endl;
    else
        std::cout << 1 << std::endl;

    return 0;
}