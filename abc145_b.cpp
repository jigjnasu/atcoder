/*
  Contest 145
  B - Echo
  Rakesh Kumar --> 19/10/2020
 */

#include <bits/stdc++.h>

inline std::string echo(const std::string& s) {
    std::size_t i = 0;
    std::size_t j = s.size() >> 1;
    for(; i < s.size() >> 1; ++i, ++j)
        if (s[i] != s[j])
            return "No";
    return "Yes";
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int n = 0;
    std::cin >> n;
    std::cin.ignore();
    std::string s;
    std::getline(std::cin, s);
    std::string r = "No";
    if ((s.size() & 1) == 0)
        r = echo(s);
    std::cout << r << std::endl;

    return 0;
}
