/*
  Contest 147
  B - Palindrome-philia
  Rakesh Kumar --> 21/10/2020
 */

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    std::string s;
    std::getline(std::cin, s);
    int i = 0, j = s.size() - 1, c = 0;
    while (i < j) {
        if (s[i] != s[j])
            ++c;
        ++i; --j;
    }
    std::cout << c << std::endl;

    return 0;
}
