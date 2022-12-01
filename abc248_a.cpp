/*
    Contest 248
    A - Lacked Number
    Rakesh Kumar
*/
    
#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    std::string n;
    std::cin >> n;
    int s = 0;
    for (char c : n)
        s += c - '0';
    std::cout << 45 - s << std::endl;

    return 0;
}