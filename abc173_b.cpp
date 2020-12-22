/*
  Contest 173
  B - Judge Status Summary
  Rakesh Kumar --> 23/12/2020
 */

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int n = 0;
    std::cin >> n;

    std::map<std::string, int> dict;
    dict["AC"] = 0;
    dict["WA"] = 0;
    dict["TLE"] = 0;
    dict["RE"] = 0;

    while (n--) {
        std::string s;
        std::cin >> s;
        ++dict[s];
    }
    std::cout << "AC x " << dict["AC"] << std::endl;
    std::cout << "WA x " << dict["WA"] << std::endl;
    std::cout << "TLE x " << dict["TLE"] << std::endl;
    std::cout << "RE x " << dict["RE"] << std::endl;

    return 0;
}
