#include <iostream>
using namespace std;

// 1. How many numbers between 1 and 1000 are divisible by 5 or 7?
int divisible(int n, int a, int b) {
  int c1 = n / a;
  int c2 = n / b;
  int c3 = n / (a * b);
  cout << "c1: " << c1 << " c2: " << c2 << " c3: " << c3 << endl;
  return c1 + c2 - c3;
}

// 2. Euclid Algorithm to find GCD
int gcd(int a, int b){
  while( b != 0 ){
    int rem = a % b;
    a = b;
    b = rem;
  }
  return a;
}

int main(void) {
  int n, a, b;
  cin >> n >> a >> b;
  // cout << divisible(n, a, b) << "\n";
  cout << gcd(a,b) << endl;
  return 0;
}
