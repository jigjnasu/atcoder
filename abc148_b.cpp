/*
  Contest 148
  B - Strings with the Same Length
  Rakesh Kumar --> 22/10/2020
 */

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int n = 0;
    std::cin >> n;
    std::cin.ignore();
    std::string s;
    std::getline(std::cin, s);
    for (int i = 0; i < n; ++i)
        std::cout << s[i] << s[i + n + 1];
    std::cout << std::endl;

    return 0;
}
