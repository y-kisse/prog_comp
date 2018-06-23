#include <iostream>

using namespace std;

long s(long val);

int main(void) {
  long k;
  cin >> k;

  long count = 0;

  for (long i = 1; count < k; i++) {
    if (i < k) {
      if ((double)i / (double)s(i) < (double)k / (double)s(k)) {
        count++;
        cout << i << endl;
      }
    } else {
      if ((double)k / (double)s(k) < (double)i / (double)s(i)) {
        count++;
        cout << i << endl;
      }
    }
  }

  return 0;
}

long s(long val) {
  long tmp = val;

  long sum = 0;

  while(tmp) {
    sum += tmp % 10;
    tmp /= 10;
  }

  return sum;
}