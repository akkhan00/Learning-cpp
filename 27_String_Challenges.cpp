#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

// 1. FIRST QUESTION (use from secrech)
/* int main(int argc, char *argv[]){
  string abc = "fjdojwjfasljfovma";
  // convert to uppercase
  for(int i=0; i<abc.length(); i++){
    if(abc[i] >= 'a' and abc[i] <= 'z')
      abc[i] -= 32;
  }
  cout << abc << endl;

  // convert to lowercase
  for(int i=0; i<abc.size(); i++){
    if(abc[i] >= 'A' && abc[i] <= 'Z')
      abc[i] += 32;
  }
  cout << abc << endl;

  return 0;
} */

// 1. FIRST QUESTION (use inbuilt funciton)
/* int main(){
  string abc = "ajdfiowjovanjioe";
  transform(abc.begin(), abc.end(), abc.begin(), ::toupper);  
  cout << abc << endl;
  transform(abc.begin(), abc.end(), abc.begin(), ::tolower);
  cout << abc << endl;
  return 0;
} */


// 2. SECOND QUESTION
/* int main(void){
  //Form the biggest number from the numeric string""";
  string num = "7942791";
  sort(num.begin(), num.end(), greater<int>());
  cout << num << endl;
  return 0;
} */


// 3. THIRD QUESTION
int main(int argc, char **argv){
  // Find the most repeating element in string
  string str = "fjojwiojfowijoisnaioowijofs";
  int freq[26];
  for(int i=0; i<26; i++)
    freq[i] = 0;

  for(int i=0; i<str.size(); i++)
    freq[str[i] - 'a'] ++;

  char ans = 'a';
  int maxF = 0;

  for(int i=0; i<26; i++){
    if(freq[i] > maxF){
      maxF = freq[i];
      ans = i + 'a';
    }
  }
  cout << ans << " " << maxF << endl;

  return 0;
}
