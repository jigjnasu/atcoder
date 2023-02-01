/*
    Contest 260
    A - A Unique Letter
    Rakesh Kumar
*/
    
#include <bits/stdc++.h>

int main() {
    std::string s;
    std::cin >> s;
    std::unordered_map<char, int> dict;
    for (char c : s)
        ++dict[c];

    char res = '1';
    for (const auto &it : dict) {
        if (it.second == 1) {
            res = it.first;
            break;
        }
    }
    if (res == '1')
        std::cout << "-1" << std::endl;
    else
        std::cout << res << std::endl;
    return 0;
}