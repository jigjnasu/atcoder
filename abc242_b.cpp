/*
    Contest 242
    B - Minimize Ordering
    Rakesh Kumar
*/
    
#include <bits/stdc++.h>
    
int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    std::string s;
    std::cin >> s;
    std::sort(s.begin(), s.end());
    std::cout << s << std::endl;
    
    return 0;
}