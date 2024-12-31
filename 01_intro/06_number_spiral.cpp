#include <iostream>

typedef long long ll;

int main() {
  int t;
  std::cin >> t;
  while (t--) {
    ll y, x;
    std::cin >> y >> x;
    if (y == x) {
      ll ans = y * y - (y - 1);
      std::cout << ans << '\n';
    } else if (y > x) {
      ll ans = y * y - (y - 1);
      if (y % 2 != 0) {
        ans = ans - (y - x);
        std::cout << ans << '\n';
      } else {
        ans = ans + (y - x);
        std::cout << ans << '\n';
      }
    } else {
      ll ans = x * x - (x - 1);
      if (x % 2 != 0) {
        ans = ans + (x - y);
        std::cout << ans << '\n';
      } else {
        ans = ans - (x - y);
        std::cout << ans << '\n';
      }
    }
  }
  return 0;
}
