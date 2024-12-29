#include <iostream>

typedef long long ll;

int main() {
  ll n;
  std::cin >> n;
  if (n == 2 || n == 3) {
    std::cout << "NO SOLUTION";
    return 0;
  }
  for (int i = 2; i <= n; i += 2)
    std::cout << i << ' ';
  for (int i = 1; i <= n; i += 2)
    std::cout << i << ' ';
  return 0;
}
