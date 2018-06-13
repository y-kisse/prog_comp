#include <iostream>

using namespace std;

int const MAX_N = 100;
bool used[MAX_N];
int perm[MAX_N];

void permutation1(int pos, int n);
void permutation2(int n);

int main(void) {

}

void permutation1(int pos, int n) {
  if (pos == n) {
    /*
    perm に対する操作
    */
    return;
  }

  // permのpos番目を0 - n-1のどれにするかのループ
  for (int i = 0; i < n; i++) {
    if (!used[i]) {
      perm[pos] = i;
      used[i] = true;
      permutation1(pos + 1, n);
      used[i] = false;
    }
  }
  return;
}

#include <algorithm>

int perm2[MAX_N];

void permutation2(int n) {
  for (int i = 0; i < n; i++) {
    perm2[i] = i;
  }
  do {
    // perm2に対する操作
  } while (next_permutation(perm2, perm2 + n));

  return;
}