#include <iostream>
#include <vector>

using namespace std;

int main(void) {
  int n;
  cin >> n;
  vector<int> a = vector<int>(n, 0);

  for (int i = 0; i < n; i++) cin >> a[i];

  int ans = 0;
  for (int i = 0; i < n; i++) {
    bool canDivide = true;

    while(canDivide) {
      if (a[i] % 2 == 0 && a[i] != 0) {
        // canDivide
        a[i] /= 2;
        ans++;
      }
      else {
        // cannot divide
        canDivide = false;
      }
    }
  }

  cout << ans << endl;

  return 0;
}