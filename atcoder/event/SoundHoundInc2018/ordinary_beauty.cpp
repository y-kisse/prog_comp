#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

void test(int n, int m, int d);
long rec(int n, int m, int d, vector<int> v, int idx);
long check(int n, int m, int d, vector<int> v);

int main(void) {
  int n, m, d;

  cin >> n;
  cin >> m;
  cin >> d;

  if (n == 1) {
    if (d == 1) {
      cout << "0.0" << endl;
    }
    else if (d == 0) {
      cout << "1.0" << endl;
    }

    return 0;
  }

  double ans = 0;
  
  ans = double(m-1) / double(n);

  cout << ans << endl;

  //test(n, m, d);
}

// 全探索ver テストケースですら無理 知ってた
void test(int n, int m, int d) {
  vector<int> v = vector<int>(m, 0);
  long count = rec(n, m, d, v, 0);

  long total = 1;
  for (int i = 0; i < m; i++) {
    total *= n;
  }

  double ans = double(count) / double(total);

  cout << ans << endl;
}

long rec(int n, int m, int d, vector<int> v, int idx) {
  long ans = 0;
  if (idx == m) {
    return check(n, m, d, v);
  }
  for (int i = 0; i < n; i++) {
    v[idx] = i;
    ans += rec(n, m, d, v, idx+1);
  }
  return ans;
}

long check(int n, int m, int d, vector<int> v) {
  long ans = 0;
  for (int i = 1; i < m; i++) {
    if (abs(v[i-1] - v[i]) == d) {
      ans++;
    }
  }
  return ans;
}


