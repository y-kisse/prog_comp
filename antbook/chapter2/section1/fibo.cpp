#include<iostream>

using namespace std;

int fib (int n);

int main (void) {
    cout << fib(5) << endl;
    return 0;
}

int fib (int n) {
    if (n <= 1) return n;
    return fib(n - 1) + fib(n - 2);
}