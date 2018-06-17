#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void) {
  int n;
  int r;

  cin >> n;
  cin >> r;

  vector<int> x = vector<int>(n, 0);
  
  for (int i = 0; i < n; i++) {
    cin >> x[i];
  }

  sort(x.begin(), x.end());

  vector<bool> covered = vector<bool>(n, false);

  int i = 0, ans = 0;
  while (i < n) {
    int s = x[i++];

    while (i < n && x[i] <= s + r) i++;

    int p = x[i - 1];

    while (i < n && x[i] <= p + r) i++;

    ans++;

  }
  printf("%d\n", ans);
}

/* input
6 10
1
7
15
20
30
50
*/



