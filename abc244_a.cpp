/*
    Contest 244
    A - Last Letter
    Rakesh Kumar
*/
    
#include <bits/stdc++.h>
   
int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int n = 0;
    std::string s;
    std::cin >> n >> s;
    std::cout << s[n - 1] << std::endl;

    return 0;
}