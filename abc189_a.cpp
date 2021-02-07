/*
  Contest 189
  A - Slot
  Rakesh Kumar --> 07/02/2021
*/

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    std::string s;
    std::cin >> s;
    std::unordered_map<char, int> d;
    for (char c : s)
        ++d[c];
    if (d[s[0]] == 3)
        std::cout << "Won" << std::endl;
    else
        std::cout << "Lost" << std::endl;

    return 0;
}
