#include <iostream>

typedef long long ll;

int main() {
  ll n;
  std::cin >> n;
  std::cout << 0 << '\n';
  for (ll i = 2; i <= n; i++) {
    std::cout << (i * i) * (i * i - 1) / 2 - (4 * (i - 1) * (i - 2)) << '\n';
  }
  return 0;
}
