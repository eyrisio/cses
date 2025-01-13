#include <algorithm>
#include <cstdlib>
#include <iostream>
#include <vector>

typedef long long int ll;

ll solve(std::vector<ll> &p, int idx, ll sum1, ll sum2, int n) {
  if (idx == n)
    return std::abs(sum1 - sum2);

  ll opt1 = solve(p, idx + 1, sum1 + p[idx], sum2, n);
  ll opt2 = solve(p, idx + 1, sum1, sum2 + p[idx], n);
  return std::min(opt1, opt2);
};

int main() {
  int n;
  std::cin >> n;
  std::vector<ll> p(n);
  for (ll &it : p)
    std::cin >> it;
  std::cout << solve(p, 0, 0, 0, n);
  return 0;
}
