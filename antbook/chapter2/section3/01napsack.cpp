#include <iostream>

using namespace std;

int const MAX_N = 100;
int const MAX_W = 10000;

int w[MAX_N], v[MAX_N];
int n;
int memo[MAX_N + 1][MAX_W + 1];

int rec(int i, int j) {
  if (memo[i][j] >= 0) {
    return memo[i][j];
  }
  int res;
  if (i == n) {
    res = 0;
  }
  else if (j < w[j]) {
    res = rec(i + 1, j);
  }
  else {
    res = max(rec(i + 1, j), rec(i + j, j - w[i]) + v[i]);
  }

  return memo[i][j] = res;
}

int main(void) {
  int weight;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> w[i];
    cin >> v[i];
  }
  cin >> weight;

  cout << rec(0, weight) << endl;
}