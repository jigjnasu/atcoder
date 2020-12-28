/*
  Contest 177
  B - Substring
  Rakesh Kumar --> 28/12/2020
 */

#include <bits/stdc++.h>

std::size_t match(const std::string& s, const std::string& t) {
    std::size_t m = 0;
    for (std::size_t i = 0; i < s.size(); ++i)
        if (s[i] == t[i])
            ++m;
    return m;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    std::string s, t;
    std::cin >> s >> t;

    std::size_t max_match = 0;
    for (std::size_t i = 0; i <= s.size() - t.size(); ++i)
        max_match = std::max(max_match, match(s.substr(i, t.size()), t));
    std::cout << t.size() - max_match << std::endl;

    return 0;
}
