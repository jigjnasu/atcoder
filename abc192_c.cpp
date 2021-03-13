/*
  Contest 192
  C - Kaprekar Number
  Rakesh Kumar --> 14/03/2021
*/

#include <bits/stdc++.h>

inline void swap_me(char& a, char& b) {
    a ^= b;
    b ^= a;
    a ^= b;
}

inline int kaprekar(int n) {
    std::string s = std::to_string(n);
    std::sort(s.begin(), s.end());
    const int b = std::stoi(s);
    int i = 0, j = s.size() - 1;
    while (i < j)
        swap_me(s[i++], s[j--]);
    const int a = std::stoi(s);
    return a - b;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int n = 0, k = 0;
    std::cin >> n >> k;
    while (k--)
        n = kaprekar(n);
    std::cout << n << std::endl;

    return 0;
}
