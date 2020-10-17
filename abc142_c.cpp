/*
  Contest 142
  C - Go to School
  Rakesh Kumar --> 17/10/2020
 */

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int n = 0;
    std::cin >> n;
    std::vector<int> kakcha(n, 0);
    for (int i = 1; i <= n; ++i) {
        int a = 0;
        std::cin >> a;
        kakcha[a - 1] = i;
    }

    for (int s : kakcha)
        std::cout << s << " ";
    std::cout << std::endl;

    return 0;
}
