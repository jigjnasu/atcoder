/*
  Contest 140
  B - Buffet
  Rakesh Kumar --> 16/10/2020
 */

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int n = 0;
    std::cin >> n;
    std::vector<int> a;
    std::vector<int> b;
    std::vector<int> c;
    for (int i = 0; i < n; ++i) {
        int e = 0;
        std::cin >> e;
        a.emplace_back(e);
    }
    for (int i = 0; i < n; ++i) {
        int e = 0;
        std::cin >> e;
        b.emplace_back(e);
    }
    for (int i = 0; i < n - 1; ++i) {
        int e = 0;
        std::cin >> e;
        c.emplace_back(e);
    }

    int sampurn_vishwas = b[a[0] - 1];
    for (std::size_t i = 1; i < a.size(); ++i) {
        sampurn_vishwas += b[a[i] - 1];
        if (a[i] - 1 == a[i - 1])
            sampurn_vishwas += c[a[i - 1] - 1];
    }
    std::cout << sampurn_vishwas << std::endl;


    return 0;
}
