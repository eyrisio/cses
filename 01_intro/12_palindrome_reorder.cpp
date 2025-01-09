#include <iostream>

int main() {
  std::string input;
  std::cin >> input;
  int len = input.length();
  std::string ans(len, ' ');

  int freq[26] = {};
  for (int i = 0; i < len; i++) {
    freq[input[i] - 'A'] += 1;
  }

  int cnt = 0;
  for (int i = 0; i < 26; i++) {
    if (freq[i] % 2 != 0)
      cnt++;
    if (cnt > 1) {
      std::cout << "NO SOLUTION\n";
      return 0;
    }
  }

  int left = 0, right = len - 1;
  for (int i = 0; i < len; i++) {
    if (freq[input[i] - 'A'] % 2 == 1) {
      ans[len / 2] = input[i];
      freq[input[i] - 'A'] -= 1;
    }

    while (freq[input[i] - 'A'] > 0) {
      ans[left++] = ans[right--] = input[i];
      freq[input[i] - 'A'] -= 2;
    }
  }

  std::cout << ans;
  return 0;
}
