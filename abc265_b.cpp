/*
    Contest 265
    B - Explore
    Rakesh Kumar
*/
    
#include <bits/stdc++.h>

int main() {
    int N = 0, M = 0;
    long long int T = 0;
    std::cin >> N >> M >> T;
    std::vector<int> samay;
    for (int i = 1; i < N; ++i) {
      int T = 0;
      std::cin >> T;
      samay.emplace_back(T);
    }
    
    std::unordered_map<int, int> abhilabh;
    for (int i = 0; i < M; ++i) {
      int R = 0, T = 0;
      std::cin >> R >> T;
      abhilabh[R - 1] = T;
    }

    for (std::size_t i = 0; i < samay.size(); ++i) {
      if (abhilabh.find(i) != abhilabh.end())
        T += abhilabh[i];
      T -= samay[i];
      if (T <= 0) {
        std::cout << "No" << std::endl;
        return 0;
      }
    }
    std::cout << "Yes" << std::endl;
    return 0;
}
