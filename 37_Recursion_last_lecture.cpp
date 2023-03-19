#include <iostream>
using namespace std;

// 1. Tiling Problem: [logic is same as fib]
int tilingWays(int n){
  if(n==0) return 0;
  if(n == 1) return 1;
  return tilingWays(n-1) + tilingWays(n-2);
}

// 2. Friends pairing Problem:
int friendsPairing(int n){
  if(n == 0 or n == 1 || n == 2)
    return n;
  return friendsPairing(n-1) + friendsPairing(n-2) * (n-1);
}

// 3. 0-1 Knapsack Problem;
int knapsack(int value[], int wt[], int n, int w){
  if(n == 0 || w == 0) return 0;
  if (wt[n-1] > w)
    return knapsack(value, wt, n-1, w);
  else
    return max(knapsack(value, wt, n-1, w-wt[n-1]) + value[n-1], knapsack(value, wt, n-1, w));
}

int main(int argc, char**argv){
  // cout << tilingWays(5) << endl;
  // cout << friendsPairing(5) << "\n";
  int wt[] = {10, 20, 30};
  int value[] = {100, 50, 150};
  int w = 50, n = 3;
  cout << knapsack(value, wt, n, w) << endl;

  return 0;
}
