/*
  Contest 210
  B - Bouzu Mekuri
  Rakesh Kumar --> 14/03/2021
*/

#include <iostream>

int main() {
  int n = 0;
  std::cin >> n;
  std::string s;
  std::cin >> s;
  
  std::size_t pos = s.find('1');
  if (pos & 1)
    std::cout << "Aoki" << std::endl;
  else
    std::cout << "Takahashi" << std::endl;

  return 0;
}