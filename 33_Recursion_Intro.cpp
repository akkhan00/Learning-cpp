#include <iostream>
using namespace std;

// 1. Add All number till n
int sum(int n){
  if(n == 0) // base case
    return 0;
  int preveSum = sum(n-1);
  return n + preveSum;
}

// 2. Calculate n raised to power of p
int power(int n, int p){
  if(p == 0) return 1; // basecase
  int prevePower = power(n, p-1);
  return n * prevePower;
}

// 3. Find the Factorial of a number n
int factorial(int n){
  if(n == 0){
    return 1;
  }
  int prevfact = factorial(n-1);
  return n * prevfact;
}

// 4. Print the nth Fibonaeci number
int fib(int n){
  if(n == 0 || n == 1) return n;
  return fib(n-1) + fib(n-2);
}

int main(int argc, char **argv){
  int n; cin >> n;
  // cout << sum(n) << endl;
  // cout << power(n, 4) << endl;
  // cout << factorial(n) << endl;
  cout << fib(n) << endl;
  return 0;
}
