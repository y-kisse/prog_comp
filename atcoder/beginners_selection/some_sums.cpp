#include <iostream>

using namespace std;

int value_sum(int num);

int main(void) {
  int n, a, b;

  cin >> n;
  cin >> a;
  cin >> b;

  int ans = 0;

  for (int i = 1; i <= n; i++) {
    int val = value_sum(i);

    if (a <= val 
        && val <= b)
      ans += i;
  }

  cout << ans << endl;

  return 0;
}

int value_sum(int num) {
  int sum = 0;
  do{
    sum += num % 10;
    num /= 10;
  }while(num > 0);

  return sum;
}