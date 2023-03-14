#include <iostream>
using namespace std;

// 1. Write a program to check if a given number is power of 2.
bool powerof2(int n){
  return (n && !(n & n-1));
}

// 2. Write a program to count the number of ones in binary representation of a number.
int numberofones(int n){
  int count = 0;
  while (n){
    n = n & (n - 1);
    count++;
  }
  return count;
}

// 3. Write a program to generate all possible subsets of a set {a, b, c};
void subsets(int arr[], int n){
  for(int i=0; i< (1 << n); i++){
    for(int j=0; j<n; j++){
      if(i & (1 << j))
        cout << arr[j] << " ";
    }cout << endl;
  }
}



int main(void){
  int n; cin >> n;
  int arr[] = {1,2,3,4};
  // cout << powerof2(n);
  // cout << numberofones(n);
  subsets(arr, n);
  return 0;
}
