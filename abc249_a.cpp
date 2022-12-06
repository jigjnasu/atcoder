/*
    Contest 249
    A - Jogging
    Rakesh Kumar
*/
    
#include <bits/stdc++.h>

int distance_iterative(int w, int d, int r, int x) {
    int td = x;
    int tw = 0;
    while (1) {
        if (td >= w) {
            tw += w;
            td -= w;
        } else {
            tw += td;
            break;
        }

        if (td >= r)
            td -= r;
        else
            break;
    }

    return tw * d;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int a = 0, b = 0, c = 0, d = 0, e = 0, f = 0, x = 0;
    std::cin >> a >> b >> c >> d >> e >> f >> x;

    const int td = distance_iterative(a, b, c, x);
    const int ad = distance_iterative(d, e, f, x);
    if (td > ad)
        printf("Takahashi\n");
    else if (td < ad)
        printf("Aoki\n");
    else
        printf("Draw\n");

    return 0;
}