#include <iostream>
#include <cstring>

using namespace std;

const int MAX_N = 100;
const int MAX_K = 100000;
int dp[MAX_K + 1];
int n, k;
int a[MAX_N];
int m[MAX_N];

void setup() {
  memset(dp, -1, sizeof(dp));
}

void solve() {
  dp[0] = 0;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j <= k; j++) {
      if (dp[j] >= 0) {
        dp[j] = m[i];
      } else if (j < a[i] || dp[j - a[i]] <= 0) {
        dp[j] = -1;
      } else {
        dp[j] = dp[j - a[i]] - 1;
      }
    }
  }
  if (dp[k] >= 0) cout << "Yes" << endl;
  else cout << "No" << endl;

}

int main(void) {
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    cin >> m[i];
  }
  cin >> k;
  setup();
  solve();
}

/* input
3
3 3
5 2
8 2
17
*/