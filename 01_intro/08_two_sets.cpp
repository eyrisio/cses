#include <iostream>
#include <set>

typedef long long ll;

int main() {
  ll n;
  std::cin >> n;
  ll sum = n * (n + 1) / 2;
  if (sum % 2 != 0) {
    std::cout << "NO\n";
  } else {
    std::set<ll> a, b;
    ll target = sum / 2;
    for (ll i = n; i >= 1; i--) {
      if (i <= target) {
        a.insert(i);
        target -= i;
      } else {
        b.insert(i);
      }
    }
    std::cout << "YES\n";
    std::cout << a.size() << '\n';
    for (auto x : a) {
      std::cout << x << ' ';
    }
    std::cout << '\n';
    std::cout << b.size() << '\n';
    for (auto x : b) {
      std::cout << x << ' ';
    }
  }
  return 0;
}
