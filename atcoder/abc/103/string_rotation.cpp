#include <iostream>
#include <string>
using namespace std;

void solve() {
  // 貪欲法
  string s, t;
  cin >> s;
  cin >> t;
  for (int i = 0; i < s.size(); i++) {
    for (int j = 0; j < t.size(); j++) {
      for (int k = 0; k < s.size(); k++) {
        if (s[(i + k) % s.size()] == t[(j + k) % s.size()]) {
          if (k == s.size() - 1) {
            cout << "Yes" << endl;
            return;
          }
        } else {
          break;
        }
      }
    }
  }
  cout << "No" << endl;
}

int main(void) {
  solve();
}