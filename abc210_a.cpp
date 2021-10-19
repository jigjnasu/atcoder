/*
  Contest 192
  A - Cabbages
  Rakesh Kumar --> 14/03/2021
*/

#include <iostream>

int main() {
    int n = 0, a = 0, x = 0, y = 0;
    std::cin >> n >> a >> x >> y;
    if (n <= a)
        std::cout << n * x << std::endl;
    else
        std::cout << (a * x) + ((n - a) * y) << std::endl;

    return 0;
}