/*
  Contest 233
  B - A Reverser
  Rakesh Kumar
*/

#include <bits/stdc++.h>

void swap(char& a, char& b) {
    a ^= b;
    b ^= a;
    a ^= b;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int l = 0, r = 0;
    std::string s;
    std::cin >> l >> r >> s;
    --l; --r;
    while (l < r)
        swap(s[l++], s[r--]);
    std::cout << s << std::endl;
    return 0;
}