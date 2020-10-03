/*
  Contest 136
  B - Uneven Numbers
  Rakesh Kumar --> 03/10/2020
 */

#include <bits/stdc++.h>

inline int odds_counts(const std::string& s) {
    int start = std::pow(10, s.size() - 1);
    int end = std::stoi(s);
    return end - start + 1;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int n = 0;
    std::cin >> n;
    std::string sn = std::to_string(n);

    if (!(sn.size() & 1))
        sn = std::string(sn.size() - 1, '9');

    int count = odds_counts(sn);
    for (int i = sn.size() - 2; i >= 1; i -= 2) {
        sn = std::string(i, '9');
        count += odds_counts(sn);
    }
    std::cout << count << std::endl;

    return 0;
}
