#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int main(void) {
  int n;
  cin >> n;

  vector<int> dp(n + 1);

  iota(dp.begin(), dp.end(), 0);

  dp[0] = 0;

  for (int i = 1; i < n + 1; i++) {
    int six_pow = 6;

    while(i - six_pow >= 0) {
      dp[i] = min(dp[i], dp[i - six_pow] + 1);
      six_pow *= 6;
    }


    int nine_pow = 9;
    while(i - nine_pow >= 0) {
      dp[i] = min(dp[i], dp[i - nine_pow] + 1);
      nine_pow *= 9;
    }
  }

  cout << dp[n] << endl;
}