/*
    Contest 247
    B - Unique Nicknames
    Rakesh Kumar
*/
    
#include <bits/stdc++.h>
  
int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    std::vector<std::string> first_name;
    std::vector<std::string> last_name;
    std::unordered_map<std::string, int> names;

    int n = 0;
    std::cin >> n;

    for (int i = 0; i < n; ++i) {
        std::string f, l;
        std::cin >> f >> l;
        first_name.emplace_back(f);
        last_name.emplace_back(l);

        if (f == l)
            ++names[f];
        else {
            ++names[f];
            ++names[l];
        }
    }

    std::string res = "Yes";
    for (int i = 0; i < n; ++i) {
        if (names[first_name[i]] > 1 && names[last_name[i]] > 1) {
            res = "No";
            break;
        }
    }
    std::cout << res << std::endl;

    return 0;
}