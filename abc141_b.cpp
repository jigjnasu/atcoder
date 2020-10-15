/*
  Contest 141
  B - Tap Dance
  Rakesh Kumar --> 16/10/2020
 */

#include <bits/stdc++.h>

inline bool odd(char c) {
    return c == 'R' || c == 'U' || c == 'D';
}

inline bool even(char c) {
    return c == 'L' || c == 'U' || c == 'D';
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    std::string s;
    std::getline(std::cin, s);
    std::string naach = "Yes";
    for (std::size_t i = 0; i < s.size(); ++i) {
        if (i & 1) {
            if (!even(s[i])) {
                naach = "No";
                break;
            }
        } else {
            if (!odd(s[i])) {
                naach = "No";
                break;
            }
        }
    }
    std::cout << naach << std::endl;

    return 0;
}
