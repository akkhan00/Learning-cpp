#include <iostream>
using namespace std;

int main(void){
  //declearation of character array
  /* char arr[100] = "ahmad";
  int i=0;
  while(arr[i] != '\0'){
    cout << arr[i];
    i++;
  }cout << endl; */

  // 1. Check Palindrome
/*   int n; cin >> n;
  char arr[n+1]; // +1 is for '\0'
  cin >> arr;
  bool check = 1;
  for(int i=0; i<n; i++){
    if(arr[i] != arr[n-1-i]){
      check = 0;
      break;
    }
  }
  if(check)
    cout << "Word is a Palindrome" << endl;
  else
    cout << "Word is Not a Palindrome\n"; */


  // 2. Largest Word In a Sentence
  int n;
  cin >> n;
  cin.ignore();
  char arr[n+1];
  cin.getline(arr, n);
  cin.ignore();

  int i=0; int currLen = 0; int maxLen =0;
  int st = 0, maxst = 0;
  while(1){
    if(arr[i] == ' ' or arr[i] == '\0'){
      if(currLen > maxLen){
        maxLen = currLen;
        maxst = st;
      }
      currLen = 0;
      st = i+1;
    }else {
      currLen ++;
    }
    if (arr[i] == '\0') {
      break; 
    }
    i++;
  }
  cout << maxLen << endl;
  for(int i=0; i<maxLen; i++)
    cout << arr[i+maxst];
  cout << endl;

  return 0;
}
