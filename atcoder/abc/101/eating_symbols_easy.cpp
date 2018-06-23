
#include <iostream>
#include <string>

using namespace std;

int main(void) {
  string s;

  int ans = 0;

  cin >> s;

  for (int i = 0; i < s.length(); i++) {
    if (s[i] == '+') {
      ans++;
    } else {
      ans--;
    }
  }

  cout << ans << endl;

  return 0;
}