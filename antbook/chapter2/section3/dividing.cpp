#include <iostream>

using namespace std;

const int MAX_N = 1000;
const int MAX_M = 1000;
int dp[MAX_M + 1][MAX_N];

int m, n, M;

void solve() {
  dp[0][0] = 1;
  for (int i = 1; i <=m; i++) {
    for (int j = 0; j <= n; j++) {
      if (j - i >= 0) {
        dp[i][j] = (dp[i - 1][j] + dp[i][j - i]) % M;
      } else {
        dp[i][j] = dp[i - 1][j];
      }
    }
  }
  cout << dp[m][n] << endl;
}

int main(void) {
  cin >> n;
  cin >> m;
  cin >> M;
  solve();
}

/* input
4
3
10000
*/