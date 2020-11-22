/*
  Contest 166
  A - A?C~
  Rakesh Kumar --> 23/11/2020
 */

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    std::string s;
    std::cin >> s;
    std::string r = "ABC";
    if (s == "ABC")
        r = "ARC";
    std::cout << r << std::endl;


    return 0;
}
