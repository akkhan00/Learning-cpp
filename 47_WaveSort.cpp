#include <iostream>
using namespace std;

void swap(int arr[], int i, int j){
  int temp = arr[i];
  arr[i] = arr[j];
  arr[j] = temp;
}
// This in the form of wave like (greater small greater small greater small ...)
void waveSort(int arr[], int n){
  for(int i=1; i<n; i+=2){
    if(arr[i] > arr[i-1]){
      swap(arr, i, i-1);
    }
    if(arr[i] > arr[i+1] and i<=n-2)
      swap(arr, i, i+1);
  }
}

int main(void){
  int arr[] = {5, 4, 3, 2, 1};
  waveSort(arr, 5);
  for(int i=0; i<5; i++)
    cout << arr[i] << " ";
  cout << endl;
  return 0;
}
