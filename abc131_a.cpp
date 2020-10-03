/*
  Contest 131
  A - Security
  Rakesh Kumar --> 03/10/2020
 */

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    std::string s;
    std::getline(std::cin, s);
    std::string result = "Good";
    for (int i = 0; i < 3; ++i)
        if (s[i] == s[i + 1])
            result = "Bad";
    std::cout << result << std::endl;

    return 0;
}
