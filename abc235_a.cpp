/*
    Contest 235
    A - Rotate
    Rakesh Kumar
*/
    
#include <bits/stdc++.h>
    
int convert(char a, char b, char c) {
    std::string s = {a, b, c};
    return std::stoi(s);
}
    
int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);
    
    std::string n;
    std::cin >> n;
    int r = convert(n[0], n[1], n[2]);
    r += convert(n[1], n[2], n[0]);
    r += convert(n[2], n[0], n[1]);
    std::cout << r << std::endl;
    
    return 0;
}