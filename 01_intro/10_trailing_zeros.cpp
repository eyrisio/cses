#include <iostream>

int main() {
  int n, ans = 0;
  std::cin >> n;
  for (int i = 5; n / i >= 1; i *= 5) {
    ans += (n / i);
  }
  std::cout << ans;
  return 0;
}
