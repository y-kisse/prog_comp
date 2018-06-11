#include <iostream>
#include <vector>
#include <string>

using namespace std;

int n, m;
vector<string> map;

void dfs(int x, int y);

int main(void) {
  
  cin >> n;
  cin >> m;

  map = vector<string>(n, "");
  for (int i = 0; i < n; i++) {
    cin >> map[i];
  }

  int ans = 0;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (map[i][j] == 'W') {
        cout << "enter: " << i << ", " << j << endl;
        dfs(i, j);
        ans++;
      }
    }
  }

  cout << ans << endl;
  

  return 0;
}

void dfs(int x, int y) {
  map[x][y] = '_';

  for (int dx = -1; dx <= 1; dx++) {
    for (int dy = -1; dy <= 1; dy++) {
      int nx = x + dx, ny = y + dy;

      if (0 <= nx && nx < n
          && 0 <= ny && ny < m
          && map[nx][ny] == 'W') {
        dfs(nx, ny);
      }
    }
  }
  return;
}

/* input
10 12
W________WW_
_WWW_____WWW
____WW___WW_
_________WW_
_________W__
__W______W__
_W_W_____WW_
W_W_W_____W_
_W_W______W_
__W_______W_
*/