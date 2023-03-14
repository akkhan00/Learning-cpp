#include <iostream>
using namespace std;

// 1. check if an array is sorted or not {1,2,3,4,5,6,7}
// array[0] < array[1] AND array[1....n] is sorted
bool sorted(int arr[], int n){
  if (n==1) return true;
  bool restArray = sorted(arr+1, n-1);
  return (arr[0]<arr[1] && restArray);
}

// 2. Print numbers till n
// 1. Decreasing order
void dec(int n){
  if(n==1){
    cout << "1" << endl;
    return ;
  }
  cout << n << endl;
  dec(n-1);
}
// 2. Increasing order
void inc(int n){
  if(n==1){
    cout << "1" << endl;
    return;
  }
  inc(n -1);
  cout << n << endl;
}

// 3. Find the first and last occurence of a number in an array
int firstocc(int arr[], int n, int i, int key){
  if (i==n) return -1; // base case
  if(arr[i] == key) return i;
  return firstocc(arr, n, i+1, key);
}

int lastocc(int arr[], int n, int i, int key){
  if(i == n) return -1;
  int restArray = lastocc(arr, n, i+1, key);
  if(restArray != -1) return restArray;
  if(arr[i] == key) return i;
  return -1;
}



int main(int argc, char *argv[]){
  int arr[] = {1,2,3,4,5, 6, 7 ,8, 4}; int n = 9;
  // cout << sorted(arr, n) << endl;
/*   dec(n);
  inc(n); */
  int i = 0;
  int key = 4;
  cout << firstocc(arr, n, i, key) << endl;
  cout << lastocc(arr, n, i, key) << endl;

  return 0;
}
