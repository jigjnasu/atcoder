/*
  Contest 122
  B - ATCoder
  Rakesh Kumar --> 30/09/2020
 */

#include <bits/stdc++.h>

inline bool acgt(char c) {
    return c == 'A' ||
           c == 'C' ||
           c == 'G' ||
           c == 'T';
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    std::string s;
    std::getline(std::cin, s);
    int max = 0;
    int count = 0;
    for (char c : s) {
        if (acgt(c)) {
            ++count;
        } else {
            max = std::max(count, max);
            count = 0;
        }
    }
    max = std::max(max, count);
    std::cout << max << std::endl;

    return 0;
}
