/*
  Contest 159
  B - String Palindrome
  Rakesh Kumar --> 15/11/2020
 */

#include <bits/stdc++.h>

inline bool palindrome(const std::string& s, int i, int j) {
    for (; i < j; ++i, --j)
        if (s[i] != s[j])
            return false;
    return true;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    std::string s;
    std::cin >> s;
    std::string r = "No";
    if (s.size() & 1) {
        if (palindrome(s, 0, s.size() - 1)) {
            if (palindrome(s, 0, ((s.size() - 1) >> 1) - 1)) {
                if (palindrome(s, ((s.size() + 3) >> 1) - 1, s.size() - 1)) {
                    r = "Yes";
                }
            }
        }
    }
    std::cout << r << std::endl;

    return 0;
}
