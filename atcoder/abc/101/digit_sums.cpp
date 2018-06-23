#include <iostream>

using namespace std;

int main(void) {
  int n;
  int tmpn;
  int s = 0;

  cin >> n;

  tmpn = n;

  while(tmpn) {
    s += tmpn % 10;
    tmpn /= 10;
  }

  if (n % s == 0) cout << "Yes" << endl;
  else cout << "No" << endl;

  return 0;
}