#include <bitset>
#include <iostream>
#include <string>

typedef long long ll;

int main() {
  int n;
  std::cin >> n;
  for (int i = 0; i < (1 << n); i++) {
    ll xorVal = i ^ (i >> 1);
    std::bitset<32> xorBits(xorVal);
    std::string xorStr = xorBits.to_string();

    for (int i = 32 - n; i < 32; i++)
      std::cout << xorStr[i];
    std::cout << '\n';
  }
  return 0;
}
