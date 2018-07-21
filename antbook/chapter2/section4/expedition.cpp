#include <iostream>
#include <queue>

using namespace std;

const int MAX_N = 100;
int L, P, N;
int A[MAX_N + 1], B[MAX_N + 1];

void solve() {
  A[N] = L;
  B[N] = 0;
  N++;

  priority_queue<int> que;
  int ans = 0, pos = 0, tank = P;

  for (int i = 0; i < N; i++) {
    int d = A[i] - pos;
  
    while (tank - d < 0) {
      if (que.empty()) {
        cout << "-1" << endl;
        return;
      }
      tank += que.top();
      que.pop();
      ans++;
    }
    tank -= d;
    pos = A[i];
    que.push(B[i]);
  }
  cout << ans << endl;
}

int main(void) {
  cin >> N;
  cin >> L;
  cin >> P;
  for (int i = 0; i < N; i++) {
    cin >> A[i];
    cin >> B[i];
  }

  solve();
}

/* input
4 25 10
10 10
14 5
20 2
21 4
*/