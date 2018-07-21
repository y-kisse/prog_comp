#include <iostream>

using namespace std;

const int MAX_N = 1000;
const int MAX_M = 1000;
int n, m, M;
int a[MAX_N];
int dp[MAX_N + 1][MAX_M + 1];

void solve() {
  for (int i = 0; i <= n; i++) {
    dp[i][0] = 1;
  }
  for (int i = 0; i <= n; i++) {
    for (int j = 0; j <= m; j++) {
      if (j - 1 - a[i] >= 0) {
        dp[i + 1][j] = (dp[i + 1][j - 1] + dp[i][j] - dp[i][j - 1 - a[i]] + M) % M;
      } else {
        dp[i + 1][j] = (dp[i + 1][j - 1] + dp[i][j]) % M;
      }
    }
  }
  cout << dp[n][m] << endl;
}

int main(void) {
  cin >> n;
  cin >> m;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  cin >> M;
  solve();
}
/* input
3
3
1 2 3
10000
*/
