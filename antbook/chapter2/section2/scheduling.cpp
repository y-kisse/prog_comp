#include <iostream>

using namespace std;

int const MAX_N = 100000;

int N, S[MAX_N], T[MAX_N];
pair<int, int> itv[MAX_N];

void solve();

int main(void) {
  cin >> N;
  for (int i = 0; i < N; i++) {
    cin >> S[i];
    cin >> T[i];
  }

  solve();

  return 0;
}

void solve() {
  // 終了時間の早い順にソート
  for (int i = 0; i < N; i++) {
    itv[i].first = T[i];
    itv[i].second = S[i];
  }

  sort(itv, itv + N);

  int ans = 0, t = 0;
  for (int i = 0; i < N; i++) {
    if (t < itv[i].second) {
      ans++;
      t = itv[i].first;
    }
  }

  cout << ans << endl;
}

/* input
5
1 3
2 5
4 7
6 9
8 10
*/
