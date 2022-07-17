/*
    Contest 240
    B - Count Distinct Integers
    Rakesh Kumar
*/
    
#include <bits/stdc++.h>
    
int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int n = 0;
    std::cin >> n;
    std::unordered_map<int, bool> m;
    while (n--) {
        int v = 0;
        std::cin >> v;
        m[v] = true;
    }
    std::cout << m.size() << std::endl;
    
    return 0;
}