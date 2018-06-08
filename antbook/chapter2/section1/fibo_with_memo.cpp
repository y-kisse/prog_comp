#include<iostream>

#define MAX_N 10

using namespace std;

int memo[MAX_N + 1];
int fib (int n);

int main (void) {
  cout << fib(4) << endl;
  cout << fib(10) << endl;
  cout << fib(11) << endl;

  return 0;
}

int fib (int n) {
  if (n > MAX_N) return -1;
  if (n <= 1) return n;
  if (memo[n] != 0) return memo[n];
  return memo[n] = fib(n - 1) + fib(n - 2);
}