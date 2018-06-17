#include <iostream>
#include <complex>

using namespace std;

int const MAX_N = 1000;
int n, m;
long cakes[MAX_N][3];

long solve(int cake_index, int cake_selected, long beauty, long taste, long popularity);

int main(void) {
  
  cin >> n;
  cin >> m;
  
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < 3; j++) cin >> cakes[i][j];
  }

  cout << solve(0, 0, 0, 0, 0) << endl;; 
}

long solve(int cake_index, int cake_selected, long beauty, long taste, long popularity){
  long ans;
  if (cake_index == n) {
    // all cakes were searched
    return labs(beauty) + labs(taste) + labs(popularity);
  }

  if (cake_selected == m) {
    // required nums of cakes selected
    return labs(beauty) + labs(taste) + labs(popularity);
  }

  ans = max(solve(cake_index + 1, cake_selected, beauty, taste, popularity),
            solve(cake_index + 1, cake_selected + 1, beauty + cakes[cake_index][0], taste + cakes[cake_index][1], popularity + cakes[cake_index][2])
            );

  return ans;
}