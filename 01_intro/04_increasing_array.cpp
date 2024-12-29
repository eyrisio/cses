#include <iostream>

typedef long long ll;

int main() {
  ll n, ans = 0;
  std::cin >> n;
  ll arr[n];
  for (ll &it : arr)
    std::cin >> it;
  for (ll i = 1; i < n; i++) {
    if (arr[i] < arr[i - 1]) {
      ans += arr[i - 1] - arr[i];
      arr[i] = arr[i - 1];
    }
  }
  std::cout << ans;
  return 0;
}
