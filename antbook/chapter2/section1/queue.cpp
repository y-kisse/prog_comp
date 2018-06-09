#include <iostream>
#include <queue>

using namespace std;

int main(void) {

  queue<int> que;
  que.push(1);
  que.push(2);
  que.push(3);
  cout << que.front() << endl;
  que.pop();
  cout << que.front() << endl;
  que.pop();
  cout << que.front() << endl;
  que.pop();

  return 0;
}