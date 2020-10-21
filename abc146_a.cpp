/*
  Contest 146
  A - Can't Wait for Holiday
  Rakesh Kumar --> 18/10/2020
 */

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    std::unordered_map<std::string, int> weak = { {"SUN", 7},
                                                  {"MON", 6},
                                                  {"TUE", 5},
                                                  {"WED", 4},
                                                  {"THU", 3},
                                                  {"FRI", 2},
                                                  {"SAT", 1} };
    std::string s;
    std::getline(std::cin, s);
    std::cout << weak[s] << std::endl;

    return 0;
}
