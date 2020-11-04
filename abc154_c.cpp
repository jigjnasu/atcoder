/*
  Contest 154
  C - Distinct or Not
  Rakesh Kumar --> 05/11/2020
 */

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int n = 0;
    std::cin >> n;
    std::unordered_map<int, bool> dict;

    std::string r = "YES";
    while (n--) {
        int e = 0;
        std::cin >> e;
        if (dict.find(e) != dict.end())
            r = "NO";
        dict[e] = true;
    }
    std::cout << r << std::endl;

    return 0;
}
