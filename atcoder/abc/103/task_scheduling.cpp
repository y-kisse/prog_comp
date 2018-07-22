#include <iostream>
#include <queue>

using namespace std;

int main(void) {
  int ans = 0;
  int tmp;
  priority_queue<int, vector<int>, greater<int>> que;
  for (int i = 0; i < 3; i++) {
    cin >> tmp;
    que.push(tmp);
  }

  int first = que.top();
  que.pop();

  int second = que.top();
  que.pop();

  ans += second - first;
  int third = que.top();
  ans += third - second;

  cout << ans << endl;
}