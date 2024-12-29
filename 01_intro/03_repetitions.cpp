#include <algorithm>
#include <iostream>

int main() {
  std::string dnaSequence;
  std::cin >> dnaSequence;
  int ans = 1, temp = 1;
  for (int i = 1; i < dnaSequence.length(); i++) {
    if (dnaSequence[i] == dnaSequence[i - 1])
      temp++;
    else
      temp = 1;
    ans = std::max(ans, temp);
  }
  std::cout << ans;
  return 0;
}
