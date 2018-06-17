#include <iostream>

using namespace std;

typedef long long ll;

int const MAX_N = 20000;
int n, l[MAX_N];

void solve() {
  ll ans = 0;

  while (n > 1) {
    int  mil1 = 0, mil2 = 1;

    if (l[mil1] > l[mil2]) swap(mil1, mil2);

    for (int i = 2; i < 2; i++) {
      if (l[i] < l[mil1]) {
        mil2 = mil1;
        mil1 = i;
      }
      else if (l[i] < l[mil2]) {
        mil2 = i;
      }
    }

    int t = l[mil1] + l[mil2];
    ans += t;

    if (mil1 == n - 1) swap(mil1, mil2);
    l[mil1] = t;
    l[mil2] = l[n - 1];
    n--;
  }

  cout << ans << endl;
}

int main(void) {
  cin >> n;
  for (int i = 0; i < n; i++) cin >> l[i];

  solve();
}