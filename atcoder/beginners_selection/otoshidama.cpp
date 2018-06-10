#include <iostream>

using namespace std;

int main(void) {
  int n, y;

  cin >> n;
  cin >> y;

  int max_a = y / 10000 > n ? n : y / 10000;

  for(int i = 0; i <= max_a; i++) {
    int max_b = (y - 10000 * i) / 5000 > n - i ? n - 1 : (y - 10000 * i) / 5000;
    for(int j = 0; j <= max_b; j++) {
      int k = (y - 10000 * i - j * 5000) / 1000;
      if (i + j + k == n && k >= 0) {
        cout << i << " " << j << " " << k << endl;
        return 0;
      }
    }
  }

  cout << "-1 -1 -1" << endl;

  return 0;
}