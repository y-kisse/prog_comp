#include <iostream>
#include <string>
#include <vector> 
using namespace std;

int k, s, t;
// string memo[11];
vector<vector<int>> memo = vector<vector<int>>(); 
const int A = 0;
const int B = 1;
const int C = 2;

// string rec(int d) {
//   cout << d << endl;
//   if (!memo[d-1].empty()) {
//     return memo[d-1];
//   }
//   else {
//     string tmp = rec(d - 1);
//     memo[d-1] = "A" + tmp + "B" + tmp + "C" + tmp;
//     cout << tmp << endl;
//     return memo[d-1];
//   }
// }

vector<int> rec(int d) {
  if (memo.size() >= d - 1) {
    return memo[d - 1];
  } else {
    vector<int> res = vector<int>();
    vector<int> low = rec(d - 1);
    vector<int> formemo;
    res.push_back(A);
    res.insert(res.end(), low.begin(), low.end());
    res.push_back(B);
    res.insert(res.end(), low.begin(), low.end());
    res.push_back(C);
    res.insert(res.end(), low.begin(), low.end());
    copy(res.begin(), res.end(), back_inserter(formemo));
    memo.push_back(formemo);
    return memo[d - 1];
  }
}

int main(void) {
  cin >> k;
  cin >> s;
  cin >> t;
  vector<int> first_memo = {0, 1, 2};
  memo.push_back(first_memo);

  vector<int> res = rec(k);
  for (int i = s - 1; i < t; i++) {
    switch(res[i]) {
      case A:
        cout << "A";
        break;
      case B:
        cout << "B";
        break;
      case C:
        cout << "C";
        break;
    }
  }
  cout << endl;
  return 0;
}