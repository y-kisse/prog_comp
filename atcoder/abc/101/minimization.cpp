#include <iostream>
#include <vector>

using namespace std;

int main(void) {
  int n;
  int k;

  cin >> n;
  cin >> k;
  vector<int> a = vector<int>(n, 0);

  int one_index;

  for (int i = 0; i < n; i++) {
    cin >> a[i];
    if (a[i] == 1) one_index = i;
  }

  int ans = (n - 2) / (k - 1) + 1;

  cout << ans << endl;

  return 0;
}