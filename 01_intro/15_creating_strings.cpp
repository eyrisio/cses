#include <algorithm>
#include <iostream>
#include <vector>

int main() {
  std::string n;
  std::cin >> n;
  std::vector<std::string> ans;
  std::sort(n.begin(), n.end());
  do {
    ans.push_back(n);
  } while (std::next_permutation(n.begin(), n.end()));
  std::cout << ans.size() << '\n';
  for (auto &it : ans)
    std::cout << it << '\n';
  return 0;
}
