/*
  Contest 146
  B - ROT N
  Rakesh Kumar --> 18/10/2020
 */

#include <bits/stdc++.h>

int main() {
    int n = 0;
    std::cin >> n;
    std::cin.ignore();
    std::string s;
    std::getline(std::cin, s);
    for (char c : s)
        printf("%c", (((c - 'A') + n) % 26) + 'A');
    std::cout << std::endl;

    return 0;
}
