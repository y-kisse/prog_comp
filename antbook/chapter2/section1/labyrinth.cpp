#include <iostream>
#include <vector>
#include <string>
#include <queue>

using namespace std;

const int INF = 10000000;
int height, width;
vector<string> map;
int sx, sy, gx, gy;
// up, right, down, left
int dx[4] = {-1, 0, 1, 0}, dy[4] = {0, 1, 0, -1} ;
vector<vector<int>> d;

int bfs();

int main(void) {
  cin >> height;
  cin >> width;

  map = vector<string>(height, "");
  d = vector<vector<int>>(height, vector<int>(width, INF));

  for (int i = 0; i < height; i++) {
    cin >> map[i];
  }

  for (int i = 0; i < height; i++) {
    for (int j = 0; j < width; j++) {
      if (map[i][j] == 'S') {
        sx = i;
        sy = j;
      }
      if (map[i][j] == 'G') {
        gx = i;
        gy = j;
      }
    }
  }


  cout << bfs() << endl;

  return 0;
}

int bfs() {
  queue<pair<int, int>> que;

  que.push(pair<int, int>(sx, sy));
  d[sx][sy] = 0;

  while (que.size()) {
    pair<int, int> p = que.front();
    que.pop();

    if (p.first == gx && p.second == gy) break;

    for (int i = 0; i < 4; i++) {
      int nx = p.first + dx[i], ny = p.second + dy[i];

      if (0 <= nx && nx < height
          && 0 <= ny && ny < width
          && map[nx][ny] != '#'
          && d[nx][ny] == INF) {
        que.push(pair<int, int>(nx, ny));
        d[nx][ny] = d[p.first][p.second] + 1;
      } 
    }
  }
  return d[gx][gy];
}

/* input
10 10
#S######_#
______#__#
_#_##_##_#
_#________
##_##_####
____#____#
_#######_#
____#_____
_####_###_
____#___G#
*/