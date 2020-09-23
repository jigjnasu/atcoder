/*
  Contest 101
  B - Digit Sums
  Rakesh Kumar --> 24/09/2020
 */

#include <bits/stdc++.h>

using ll = long long int;

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    ll n = 0;
    std::cin >> n;
    int digit_sum = 0;
    for (char c : std::to_string(n))
        digit_sum += c - '0';
    if (n % digit_sum)
        std::cout << "No" << std::endl;
    else
        std::cout << "Yes" << std::endl;

    return 0;
}
