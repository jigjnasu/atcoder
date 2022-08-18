/*
    Contest 241
    B - Pasta
    Rakesh Kumar
*/
    
#include <bits/stdc++.h>
    
int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int n = 0, m = 0;
    std::cin >> n >> m;
    std::unordered_map<int, int> noodles;
    while (n--) {
        int l = 0;
        std::cin >> l;
        ++noodles[l];
    }

    std::vector<int> bookha_saand;
    while (m--) {
        int l = 0;
        std::cin >> l;
        bookha_saand.emplace_back(l);
    }

    std::string r = "Yes";
    for (int l : bookha_saand) {
        if (noodles[l] == 0) {
            r = "No";
            break;
        } else {
            --noodles[l];
        }
    }
    std::cout << r << std::endl;
    
    return 0;
}