/*
    Contest 235
    B - Climbing Takahashi
    Rakesh Kumar
*/
    
#include <bits/stdc++.h>
    
int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);
    
    int n = 0;
    std::cin >> n;
    bool check = true;
    int v = 0;
    std::cin >> v;
    for (int i = 0; i < n - 1; ++i) {
        int h = 0;
        std::cin >> h;
        if (check) {
            if (h > v)
                v = h;
            else
                check = false;
        }
    }
    std::cout << v << std::endl;
    
    return 0;
}