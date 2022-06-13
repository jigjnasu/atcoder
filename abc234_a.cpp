/*
  Contest 234
  A - Weird Function
  Rakesh Kumar
*/

#include <bits/stdc++.h>

int f(int x) {
    return (x * x) + (x << 1) + 3;
}

int t(int x) {
    return f(f(f(x) + x) + f(f(x)));
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int x = 0;
    std::cin >> x;
    std::cout << t(x) << std::endl;

    return 0;
}