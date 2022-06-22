/*
    Contest 237
    B - Matrix Transposition
    Rakesh Kumar
*/
    
#include <bits/stdc++.h>
    
int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int r = 0, c = 0;
    std::cin >> r >> c;
    std::vector<std::vector<int>> v(r, std::vector<int>(c));
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            int e = 0;
            std::cin >> e;
            v[i][j] = e;
        }
    }

    for (int i = 0; i < c; ++i) {
        for (int j = 0; j < r; ++j)
            std::cout << v[j][i] << " ";
        std::cout << std::endl;
    }

    return 0;
}