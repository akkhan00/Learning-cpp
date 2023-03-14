#include <iostream>
using namespace std;

// 1. Write a program to find a unique number in an array where all numbers except one, are prestn twice
int unique1(int arr[], int n){
  int xorsum = 0;
  for(int i=0; i<n; i++)
    xorsum = xorsum ^ arr[i];
  return xorsum;
}

// 2. Write a program to find 2 unique numbers in an array where all numbers except two, are present twice {1, 2,3,4,5,5,4,3};
int setBit(int n, int pos){
  return ((n & (1 << pos)) != 0);
}

void unique2(int arr[], int n){
  int xorsum = 0;
  for(int i=0; i<n; i++)
    xorsum = xorsum ^ arr[i];
  int setbit = 0; int pos = 0; int tempxor = xorsum;
  while(setbit != 1){
    setbit = xorsum & 1;
    pos ++;
    xorsum = xorsum >> 1;
  }
  int newxor = 0;
  for(int i=0; i<n; i++){
    if(setBit(arr[i], pos-1))
       newxor = newxor ^ arr[i];
  }

  cout << newxor << endl;
  cout << (tempxor ^ newxor) << endl;
}

// 3. Write a program to find a unique number in an array where all numbers except one present thrice. {1,2,3,4,5,1,2,3,1,2,3,4,4};
bool getBit(int n, int pos){
  return ((n & (1 << pos)) != 0);
}
int unique3(int arr[], int n){
  int result = 0;
  for(int i=0; i<64; i++){
    int sum = 0;
    for(int j=0; j<n; j++){
      if(getBit(arr[j], i))
        sum ++;
    }
    if(sum % 3 != 0)
      result = setBit(result, i);
  }
  return result;
}

int main(int argc, char *argv[]){
  int arr[] = {1,2,3,4,5,4,3,2,1,1,2,3,4};
  // cout << unique1(arr, 9)<<"\n";
  // unique2(arr, 8);

  cout << unique3(arr, 13);


  return 0;
}
