#include <iostream>

using namespace std;
const int MAX_N = 100000;

void solve() {
  int N, M;
  int a[MAX_N], b[MAX_N];
  pair<int, int> orders[MAX_N];
  bool cut[MAX_N];
  cin >> N;
  cin >> M;
  for (int i = 0; i < M; i++) {
    cin >> a[i];
    cin >> b[i];
    orders[i].first = b[i];
    orders[i].second = a[i];
  }
  sort(orders, orders + M);

  int ans = 0, d = 0;

  for (int i = 0; i < M; i++) {
    if (d <= orders[i].second) {
      d = orders[i].first;
      ans++;
    }
  }

  cout << ans << endl; 

}

int main(void) {
  solve();
}
