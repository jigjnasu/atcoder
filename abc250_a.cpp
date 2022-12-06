/*
    Contest 250
    A - Adjacent Squares
    Rakesh Kumar
*/
    
#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int h = 0, w = 0, r = 0, c = 0;
    std::cin >> h >> w;
    std::cin >> r >> c;

    int n = 0;
    if (r - 1 >= 1 && r - 1 <= h)
        ++n;
    if (r + 1 >= 1 && r + 1 <= h)
        ++n;
    if (c - 1 >= 1 && c - 1 <= w)
        ++n;
    if (c + 1 >= 1 && c + 1 <= w)
        ++n;
    printf("%d\n", n);

    return 0;
}