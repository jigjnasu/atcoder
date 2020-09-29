/*
  Contest 122
  A - Double Helix
  Rakesh Kumar --> 30/09/2020
 */

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    std::unordered_map<char, char> dict = {{'A', 'T'},
                                           {'T', 'A'},
                                           {'C', 'G'},
                                           {'G', 'C'}};
    char b;
    std::cin >> b;
    std::cout << dict[b] << std::endl;

    return 0;
}
