#include <iostream>

using namespace std;

int a, b, c, x;
int decide500(int left);
int decide100(int left);
int decide50(int left);

int main(void) {
  cin >> a;
  cin >> b;
  cin >> c;
  cin >> x;

  cout << decide500(x) << endl;

  return 0;
}

int decide500(int left) {
  int ret = 0;
  int max = left / 500 > a ? a : left / 500;

  for (int i = 0; i <= max; i++) {
    ret += decide100(left - i * 500);
  }

  return ret;
}

int decide100(int left) {
  int ret = 0;
  int max = left / 100 > b ? b : left / 100;

  for (int i = 0; i <= max; i++) {
    ret += decide50(left - i * 100);
  }

  return ret;
}

int decide50(int left) {
  return left / 50 > c ? 0 : 1;
}