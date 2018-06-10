#include <iostream>
#include <tuple>

using namespace std;

tuple<int, int, int> search(int a, int b, int c, int n);

int main(void) {
  int n, y;
  int a, b, c;

  cin >> n;
  cin >> y;

  a = y / 10000;
  b = (y % 10000) / 5000;
  c = (y % 5000) / 1000;

  tuple<int, int, int> t = search(a, b, c, n);

  cout << get<0>(t) << " " << get<1>(t) << " " << get<2>(t) << endl;

  return 0;
}

tuple<int, int, int> search(int a, int b, int c, int n) {
  if (a + b + c == n)
    return make_tuple(a, b, c);
  
  if (a > 0) {
    tuple<int, int, int> t = search(a-1, b+2, c, n);
    if (get<0>(t) != -1) return t;
  }

  if (a + b + c + 4 <= n) {
    tuple<int, int, int> t = search(a, b-1, c+5, n);
    if (get<0>(t) != -1) return t;
  }

  return make_tuple(-1, -1, -1);
}