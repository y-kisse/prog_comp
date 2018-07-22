#include <iostream>

using namespace std;
const int MAX_N = 3000;

void solve() {
  int N;
  int a[MAX_N];
  int ans = 0;
  cin >> N;
  for (int i = 0; i < N; i++) {
    cin >> a[i];
    ans += a[i] - 1;
  }

  cout << ans << endl;
}

int main(void) {
  solve();
}