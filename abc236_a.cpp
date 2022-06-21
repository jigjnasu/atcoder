/*
    Contest 236
    A - chukodai
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
    
    std::string s;
    int a = 0, b = 0;
    std::cin >> s >> a >> b;
    swap(s[a - 1], s[b - 1]);
    std::cout << s << std::endl;
    
    return 0;
}