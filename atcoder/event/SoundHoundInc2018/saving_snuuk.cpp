#include <iostream>
#include <vector>

using namespace std;

class Train {
  public:
    Train(int c1, int c2, int a, int b);
    int city1;
    int city2;
    int yen;
    int snuuk;
};

Train::Train(int c1, int c2, int a, int b) {
  city1 = c1;
  city2 = c2;
  yen = a;
  snuuk = b;
}

int main(void) {
  int n, m, s, t;

  cin >> n;
  cin >> m;
  cin >> s;
  cin >> t;

  vector<Train> trains = vector<Train>(n, Train(0, 0, 0, 0));

  for (int i = 0; i < n; i++) {
    int u, v, a, b;
    cin >> u;
    cin >> v;
    cin >> a;
    cin >> b;

    trains[i] = Train(u, v, a, b);
  }
}