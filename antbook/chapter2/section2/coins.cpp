#include <iostream>

using namespace std;

const int V[6] = {1, 5, 10, 50, 100, 500};

int C[6];
int A;

int solve();

int main(void) {
  for (int i = 0; i < 6; i++) {
    cin >> C[i];
  }

  cin >> A;

  cout << solve() << endl;

  return 0;
}

int solve() {
  int ans = 0;

  for (int i = 5; i >= 0; i--) {
    int t = min(A / V[i], C[i]);
    A -= t * V[i];
    ans += t;
  }

  return ans;
}
