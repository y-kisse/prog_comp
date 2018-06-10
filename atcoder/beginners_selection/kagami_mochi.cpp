#include <iostream>
#include <algorithm>

using namespace std;

int main(void) {
  int n;
  int d[100];

  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> d[i];
  }

  sort(d, d + n);

  int ans = 1;
  for (int i = 1; i < n; i++) {
    if (d[i - 1] < d[i]) ans++;
  }

  cout << ans << endl;
  return 0;
}