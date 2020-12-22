/*
  Contest 172
  B - Minor Change
  Rakesh Kumar --> 22/12/2020
 */

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    std::string s, t;
    std::cin >> s >> t;
    int c = 0;
    for (std::size_t i = 0; i < s.size(); ++i)
        if (s[i] != t[i])
            ++c;
    std::cout << c << std::endl;

    return 0;
}
