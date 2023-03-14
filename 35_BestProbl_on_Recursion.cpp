#include <iostream>
using namespace std;

// 1. Reverse a string using recursion
void reverse(string s){
  if(s.length() == 0) return ; // base case
  string restStr = s.substr(1);
  reverse(restStr);
  cout << s[0];
}

// 2. [pi] Replace pi with 3.14 in string
// "pippxxppiixipi" ---> "3.14ppxxp3.14ixi3.14"
void replacePi(string s){
  // base case
  if(s.length() == 0) return;

  if(s[0] == 'p' and s[1] == 'i'){
    cout << "3.14";
    replacePi(s.substr(2));
  }else{
    cout << s[0];
    replacePi(s.substr(1));
  }
}

// 3. Tower of Hanoi
void towerofHanoi(int n, char src, char dst, char helper){
  if(n == 0) return ; // base case
  towerofHanoi(n-1, src, helper, dst);
  cout << "Move from " << src << " to " << dst << endl;
  towerofHanoi(n-1, helper, dst, src);
}

// 4. Remove all duplicates from the String
string removeDup(string s){
  // base case
  if(s.length() == 0) return "";
  char ch = s[0];
  string ans = removeDup(s.substr(1));
  if(ch == ans[0]) return ans;
  return (ch+ans);
}

// 5. Move all x to the end of the string
// "axxbdxcefxhix" ====>> "abdcefhixxxxx"
string moveallx(string s){
  // base conditon to break recursion
  if(s.size() == 0) return"";
  char ch = s[0];
  string ans = moveallx(s.substr(1));
  if(ch == 'x') return ans + ch;
  return ch + ans;
}

// 6. Generate all substring of a string
void subseq(string s, string ans){
  if(s.length() == 0){
    cout << ans << endl;
    return;
  }
  char ch = s[0];
  string restStr = s.substr(1);
  subseq(restStr, ans);
  subseq(restStr, ans+ch);
}

// 7. Generate Substring with ASCII  number
void subseqAscii(string s, string ans){
  if(s.length() == 0){
    cout << ans << endl;
    return;
  }
  char ch = s[0];
  int code = ch;
  string ros = s.substr(1);
  subseqAscii(ros, ans);
  subseqAscii(ros, ans+ch);
  subseqAscii(ros, to_string(code));
}

// 8. Print all possible words from phone digits
char keypadArr[] = {};// Todo
void keypad(string s, string ans){
  if(s.length() == 0){
    cout << ans << endl;
    return;
  }
  char ch = ch = s[0];
  string code = keypadArr[ch-'0'];
  string ros = s.substr(1);
  for(int i=0; i< code.length(); i++)
    keypad(ros, ans+code[i]);
}

int main(int argc, char **argv){
  // string abc; cin >> abc;
  // reverse(abc);
  // replacePi(abc);
  // towerofHanoi(5, 'a', 'b', 'c');
  // cout << removeDup("aahmmadd") << endl;
  // cout << moveallx("xxxaxxhmxxxaxdxx") <<endl; 
  string temp = "";
  // subseq("Ahmad", temp);
  subseqAscii("Ahmad", temp);
  return 0;
}
