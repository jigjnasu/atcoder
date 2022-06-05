/*
  Contest 232
  B - Caesar Cipher
  Rakesh Kumar
*/

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    std::string s, t;
    std::cin >> s >> t;
    for (int i = 0; i < 26; ++i) {
        std::string r;
        for (char c : s)
            r += 'a' + ((c - 'a' + i) % 26);
        if (r == t) {
            std::cout << "Yes" << std::endl;
            return 0;
        }
    }
    std::cout << "No" << std::endl;

    return 0;
}