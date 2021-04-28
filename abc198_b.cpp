/*
  B - Palindrome with leading zeros
  Contest 198
  Rakesh Kumar --> 29/04/2021
 */

#include <bits/stdc++.h>

inline bool palindrome(const std::string& n) {
    int i = 0, j = static_cast<int>(n.size()) - 1;
    while (i < j)
        if (n[i++] != n[j--])
            return false;
    return true;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    std::string n;
    std::cin >> n;
    int i = n.size() - 1;
    while (n[i] == '0')
        --i;
    n = n.substr(0, i + 1);
    std::cout << (palindrome(n) ? "Yes" : "No") << std::endl;

    return 0;
}
