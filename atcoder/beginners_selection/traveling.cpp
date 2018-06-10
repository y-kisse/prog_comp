#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

struct plan {
  int time;
  int x;
  int y;
};

int main(void) {
  vector<plan> plans;
  int n;
  cin >> n;

  for (int i = 0; i < n; i++) {
    int t, x, y;
    cin >> t;
    cin >> x;
    cin >> y;
    plans.push_back({t, x, y});
  }

  int t = 0;
  int x = 0;
  int y = 0;

  for (vector<plan>::const_iterator itr = plans.begin(); 
       itr != plans.end(); 
       itr++) {
    int step = abs(x - itr->x) + abs(y - itr->y);
    if (((itr->time - t) - step) % 2 == 1
        || (itr->time - t) < step) {
      cout << "No" << endl;
      return 0;
    }
    x = itr -> x;
    y = itr -> y;
    t = itr -> time;
  }

  cout << "Yes" << endl;

  return 0;
}