// 01napsackのサイズ制約が変化したver
// 品物,重さのdpだと表が大きくなりすぎる

#include <iostream>
#include <climits>

using namespace std;

const int MAX_N = 100;
const int MAX_V = 100;
// const int INF = INT_MAX;
int dp[MAX_N + 1][MAX_V * MAX_N + 1];
int n, W;
int w[MAX_N];
int v[MAX_N];

void solve() {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j <= MAX_N * MAX_V; j++) {
      if (j < v[i]) {
        dp[i + 1][j] = dp[i][j];
      } else {
        dp[i + 1][j] = min(dp[i][j], dp[i][j - v[i]] + w[i]);
      }
    }
  }
  
  int res = 0;
  for (int i = 0; i < MAX_N * MAX_V; i++) {
    if (dp[n][i] <= W) {
      res = i;
    }
  }

  cout << res << endl;
}


void setup() {
  for (int i = 0; i < MAX_N + 1; i++) {
    for (int j = 0; j < MAX_N * MAX_V + 1; j++) {
      dp[i][j] = INT_MAX / 2;
    }
  }
  dp[0][0] = 0;
}

int main (void) {
  // cout << "DEBUG" << endl;
  setup();
  // cout << "DEBUG" << endl;
  cin >> n;
  cin >> W;
  for (int i = 0; i < n; i++) {
    cin >> w[i];
    cin >> v[i];
  }
  solve();

  return 0;
}
