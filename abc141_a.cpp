/*
  Contest 141
  A - Weather Prediction
  Rakesh Kumar --> 16/10/2020
 */

#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    std::unordered_map<std::string, std::string> mausam = {{"Sunny", "Cloudy"},
                                                           {"Cloudy", "Rainy"},
                                                           {"Rainy", "Sunny"}};
    std::string s;
    std::getline(std::cin, s);
    std::cout << mausam[s] << std::endl;

    return 0;
}
