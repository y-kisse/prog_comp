#include <iostream>
#include <vector>
#include <string>

using namespace std;

int n, m;
string s, t;
vector<vector<int>> dp;

void solve() {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (s[i] == t[j]) {
        dp[i + 1][j + 1] = dp[i][j] + 1;
      } else {
        dp[i + 1][j + 1] = max(dp[i][j + 1], dp[i + 1][j]);
      }
    }
  }

  cout << dp[n][m] << endl;
}

void showTable() {
  for (int i = 0; i < n+1; i++) {
    for (int j = 0; j < m+1; j++) {
      cout << dp[i][j];
    }
    cout << endl;
  }
}

int main(void) {
  cin >> n;
  cin >> m;
  cin >> s;
  cin >> t;

  dp = vector<vector<int>>(n+1, vector<int>(m+1, 0));

  solve();
  showTable();
}