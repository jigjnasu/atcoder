/*
  Contest 157
  B - Bingo
  Rakesh Kumar --> 09/11/2020
 */

#include <bits/stdc++.h>

inline void mark(std::vector<std::vector<int>>& grid, int v) {
    for (int r = 0; r < 3; ++r)
        for (int c = 0; c < 3; ++c)
            if (grid[r][c] == v)
                grid[r][c] = 0;
}

inline bool bingo(std::vector<std::vector<int>>& grid) {
    // if any row is there
    if (grid[0][0] == 0 && grid[0][1] == 0 && grid[0][2] == 0)
        return true;
    if (grid[1][0] == 0 && grid[1][1] == 0 && grid[1][2] == 0)
        return true;
    if (grid[2][0] == 0 && grid[2][1] == 0 && grid[2][2] == 0)
        return true;
    // if any column is there
    if (grid[0][0] == 0 && grid[1][0] == 0 && grid[2][0] == 0)
        return true;
    if (grid[0][1] == 0 && grid[1][1] == 0 && grid[2][1] == 0)
        return true;
    if (grid[0][2] == 0 && grid[1][2] == 0 && grid[2][2] == 0)
        return true;
    // if any diagnal is there
    if (grid[0][0] == 0 && grid[1][1] == 0 && grid[2][2] == 0)
        return true;
    if (grid[0][2] == 0 && grid[1][1] == 0 && grid[2][0] == 0)
        return true;
    return false;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    std::vector<std::vector<int>> grid(3, std::vector<int>(3, 0));
    for (int r = 0; r < 3; ++r) {
        for (int c = 0; c < 3; ++c) {
            int e = 0;
            std::cin >> e;
            grid[r][c] = e;
        }
    }

    int n = 0;
    std::cin >> n;
    while (n--) {
        int e = 0;
        std::cin >> e;
        mark(grid, e);
    }

    std::cout << (bingo(grid) ? "Yes" : "No") << std::endl;

    return 0;
}
