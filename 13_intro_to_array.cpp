#include <iostream>
using namespace std;

/* implementation of array
datatype arrayName[size]; */
/* 
int main(int argc, char **argv){
  int n;
  cout << "Enter Array Length: ";
  cin >> n;
  int arr[n];
  // now store value in array with loop
  for(int i = 0; i<n; i++){
    cin >> arr[i];
  }
  // now print the stored array
  for(int i=0; i<n; i++){
    cout << arr[i] <<endl; 
  }
  return 0;
} */

// write a program to findout the min and max in array
#include <climits>
int main(int argc, char *argv[]){
  int n;
  cin >> n;
  int arr[n];
  for(int i=0; i<n; i++){
    cin>> arr[i];
  }
  
  int maxNum = INT_MIN;
  int minNum = INT_MAX;
  for(int i=0; i<n; i++){
    maxNum = max(maxNum, arr[i]);
    minNum = min(minNum, arr[i]);
  }

  cout << "Max Number: " << maxNum << endl;
  cout << "Min Number: " << minNum << "\n";
  return 0;
}
