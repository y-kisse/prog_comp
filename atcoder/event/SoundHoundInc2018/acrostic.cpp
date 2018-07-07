#include <iostream>
#include <string>

using namespace std;

int main(void) {
  string s; 
  int w;

  cin >> s;
  cin >> w;

  int i = 0;

  while (i * w < s.size()) {
    cout << s[i * w];
    i++;
  }

  cout << endl;

  return 0;
}