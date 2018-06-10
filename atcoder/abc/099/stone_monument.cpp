#include<iostream>

using namespace std;

int main(void) {
  int a, b;

  cin >> a;
  cin >> b;

  int sum = 0;
  for (int i = 1; i < 1000; i++) {
    int presum = sum;
    sum += i;
    if (presum - a == sum - b) {
      cout << (sum - b) << endl;
    }
  }
}