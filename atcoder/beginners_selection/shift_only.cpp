#include <iostream>

using namespace std;

int main(void) {
  int n;
  int a[200];

  cin >> n;
  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }

  int ans = 0;

  // true & break
  bool continueFlag = true;
  while(continueFlag) {
    for(int i = 0; i < n; i++) {
      if (a[i] % 2 != 0) {
        continueFlag = false;
        break;
      } 
      else {
        a[i] /= 2;
      }
    }
    if (continueFlag) {
      ans++;
    }
  }

  cout << ans << endl;

  return 0;

}