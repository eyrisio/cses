#include <iostream>

typedef long long ll;

#define MOD 1000000007

int main() {
  ll n, answer = 1;
  std::cin >> n;
  for (ll i = 0; i < n; i++) {
    answer = (answer * 2) % MOD;
  }
  std::cout << answer << '\n';
  return 0;
}
