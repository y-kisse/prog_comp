#include <iostream>

using namespace std;

int main(void) {
  int d, n;

  cin >> d;
  cin >> n;

  int ans;
  if (n == 100) ans = 101;
  else ans = n;

  for (int i = 0; i < d; i++) ans *= 100;

  cout << ans << endl;

}
