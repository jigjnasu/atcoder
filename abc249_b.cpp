/*
    Contest 249
    B - Perfect String
    Rakesh Kumar
*/
    
#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    std::string s;
    std::cin >> s;

    bool upper = false;
    bool lower = false;
    bool distinct = true;

    std::array<int, 26> la = {0};
    std::array<int, 26> ua = {0};

    for (char c : s) {
        if (std::isupper(c)) {
            upper = true;
            if (ua[c - 'A'] == 1)
                distinct = false;
            ua[c - 'A'] = 1;
        }

        if (std::islower(c)) {
            lower = true;
            if (la[c - 'a'] == 1)
                distinct = false;
            la[c - 'a'] = 1;
        }
    }

    printf("%s\n", upper && lower && distinct ? "Yes" : "No");

    return 0;
}