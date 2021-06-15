/*
  Contest 203
  C - Friends and Travel costs
  Rakesh Kumar --> 15/06/2021
*/

#include <bits/stdc++.h>

using ll = unsigned long long int;

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    ll n = 0, antim_gaon = 0;
    std::cin >> n >> antim_gaon;

    std::map<ll, ll> dict;
    while (n--) {
        ll a = 0, b = 0;
        std::cin >> a >> b;
        dict[a] += b;
    }

    for (const auto& it : dict) {
        if (it.first <= antim_gaon)
            antim_gaon += it.second;
        else
            break;
    }
    std::cout << antim_gaon << std::endl;


    return 0;
}
