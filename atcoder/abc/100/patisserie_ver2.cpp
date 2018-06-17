#include <iostream>

using namespace std;

int const MAX_N = 1000;
int n, m;
long cakes[MAX_N][3];
long memo[MAX_N+1][3] = {};

int main(void) {
  
  cin >> n;
  cin >> m;
  
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < 3; j++) cin >> cakes[i][j];
  }

  for (int cake_index = 0; cake_index < n; cake_index++) {
    for (int cake_selected = 0; cake_selected < m; cake_selected++) {
      long old_val = 0;
      for (int i = 0; i < 3; i++) old_val += labs(memo[cake_selected+1][i]);
      long candidate = 0;
      for (int i = 0; i < 3; i++) candidate += labs(memo[cake_selected][i] + cakes[cake_index][i]); 
      if (old_val < candidate) {
        for (int i = 0; i < 3; i++) memo[cake_selected+1][i] = memo[cake_selected][i] + cakes[cake_index][i];
      }
    }
  }

  long ans = 0;
  for (int i = 0; i < 3; i++) ans += labs(memo[m][i]);
  
  cout << endl << ">>> dump memo" << endl;
  for (int i = 0; i <= m; i++) {
    for (int j = 0; j < 3; j++) {
      cout << memo[i][j] << " ";
    }
    cout << endl;
  }
  cout << "<<<" << endl << endl;

  cout << ans << endl;; 
}