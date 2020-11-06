/*
  Contest 155
  A - Poor
  Rakesh Kumar --> 07/11/2020
 */

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int a = 0, b = 0, c = 0;
    std::cin >> a >> b >> c;
    std::unordered_map<int, int> dict;
    ++dict[a]; ++dict[b]; ++dict[c];
    std::cout << (dict.size() == 2 ? "Yes" : "No") << std::endl;

    return 0;
}
