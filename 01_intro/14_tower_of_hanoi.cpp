#include <iostream>
#include <utility>
#include <vector>

void solve(std::vector<std::pair<int, int>> &ans, int n, int src, int dest,
           int aux) {
  if (n == 0)
    return;
  solve(ans, n - 1, src, aux, dest);
  ans.push_back({src, dest});
  solve(ans, n - 1, aux, dest, src);
};

int main() {
  int n;
  std::cin >> n;
  std::vector<std::pair<int, int>> ans;
  solve(ans, n, 1, 3, 2);

  std::cout << ans.size() << '\n';
  for (auto &it : ans)
    std::cout << it.first << ' ' << it.second << '\n';
  return 0;
}
