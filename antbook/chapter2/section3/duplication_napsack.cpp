#include <iostream>
#include <vector>

using namespace std;

const int MAX_N = 100;
const int MAX_W = 10000;
int dp[MAX_N+1][MAX_W+1] = {};
int n, w;
int gw[MAX_N] = {};
int gv[MAX_N] = {};

void solve() {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j <= w; j++) {
      if (j < gw[i]) {
        dp[i + 1][j] = dp[i][j];
      } else {
        dp[i + 1][j] = max(dp[i][j], dp[i + 1][j - gw[i]] + gv[i]);
      }
    }
  }

  cout << dp[n][w] << endl;
}

int main(void) {
  cin >> n;
  cin >> w;
  for (int i = 0; i < n; i++) {
    cin >> gw[i];
    cin >> gv[i];
  }

  solve();
}
