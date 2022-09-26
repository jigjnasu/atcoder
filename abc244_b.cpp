/*
    Contest 244
    B - Go Straight and Turn Right
    Rakesh Kumar
*/
    
#include <bits/stdc++.h>

using ull = unsigned long long int;
    
int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int x = 0, y = 0, n = 0, c = 0;
    int tx[] = {1, 0, -1, 0};
    int ty[] = {0, -1, 0, 1};
    std::string s;
    std::cin >> n >> s;
    for (int i = 0; i < n; ++i) {
        if (s[i] == 'S') {
            x += tx[c];
            y += ty[c];
        } else {
            c = (c + 1) % 4;
        }
    }
    std::cout << x << " " << y << std::endl;
    return 0;
}