#include<string>
#include<iostream>
#include<algorithm>

using namespace std;

int main(void) {
  string divider[4] = {"dream", "dreamer", "erase", "eraser"};
  string S;
  cin >> S;

  reverse(S.begin(), S.end());
  for (int i = 0; i < 4; i++) reverse(divider[i].begin(), divider[i].end());

  bool ans = true;
  for (int i = 0; i < S.size();) {
    bool can = false;
    for (int j = 0; j < 4; j++) {
      string d = divider[j];
      if (S.substr(i, d.size()) == d) {
        can = true;
        i += d.size();
        break;
      }
    }

    if (!can) {
      ans = false;
      break;
    }
  }

  if (ans) cout << "YES" << endl;
  else cout << "NO" << endl;

  return 0;
}