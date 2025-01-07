#include <algorithm>
#include <iostream>

typedef long long ll;

int main() {
  int t;
  std::cin >> t;
  while (t--) {
    ll a, b;
    std::cin >> a >> b;
    std::cout << ((a + b) % 3 == 0 && (std::min(a, b) * 2 >= std::max(a, b))
                      ? "YES\n"
                      : "NO\n");
  }
  return 0;
}
