#include <iostream>

using namespace std;

const int MAX_N = 100;
int n;
int a[MAX_N];
int dp[MAX_N];

void solve() {
  int res = 0;
  for (int i = 0; i < n; i++) {
    dp[i] = 1;
    for (int j = 0; j < i; j++) {
      if (a[j] < a[i]) {
        dp[i] = max(dp[i], dp[j] + 1);
      }
    }
    res = max(res, dp[i]);
  }
  cout << res << endl;
}

int main(void) {
  cin >> n;
  for (int i = 0; i < n; i++) cin >> a[i];
  solve();
}

/* input
5
4 2 3 1 5
*/