#include <iostream>
using namespace std;

// Linear Search in array
int linearSearch(int arr[], int n, int key) {
  for (int i = 0; i < n; i++) {
    if (key == arr[i])
      return i;
  }
  return -1;
}

// Binary Search in array
int binarySearch(int arr[], int length, int key){
  int start = 0; int end = length;
  while (start <=end){
    int mid = (start + end)/2;
    if(arr[mid] == key)
      return mid;
    else if(arr[mid] > key)
      end = mid -1;
    else
      start = mid + 1;
  }
  return -1;
}


int main(void) {
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  int key;
  cout << "Search Term: ";
  cin >> key;

  // linear search
  /* int ans = linearSearch(arr, n, key);
  cout << ans; */

  // binary search
  int ans = binarySearch(arr, n, key);
  cout << ans;

  return 0;
}
