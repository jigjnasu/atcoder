/*
  Contest 154
  A - Remaining Balls
  Rakesh Kumar --> 05/11/2020
 */

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    std::string s, t;
    std::cin >> s >> t;
    int a = 0, b = 0;
    std::cin >> a >> b;
    std::unordered_map<std::string, int> dict;
    dict[s] = a;
    dict[t] = b;
    std::string u;
    std::cin >> u;
    --dict[u];
    std::cout << dict[s] << " " << dict[t] << std::endl;

    return 0;
}
