#include <iostream>

int main() {
  long long n;
  std::cin >> n;
  long long ogSum = n * (n + 1) / 2;
  long long currSum = 0;
  for (; n > 1; n--) {
    int x;
    std::cin >> x;
    currSum += x;
  }
  std::cout << ogSum - currSum;
  return 0;
}
