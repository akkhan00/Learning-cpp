#include <iostream>
using namespace std;

/* int main(void){
  char a;
  cin>>a;
  switch(a){
    case 'a':
      cout << "hello A\n";
      break;
    case 'b':
      cout << "Hi B\n";
      break;
    case 'c':
      cout << "Yohh C" << endl;
      break;
    default:
      cout << "Wrong Input Enter [a,b,c]\n";
      break;
  }
  return 0;
} */


// Write a simple calculator
int main(int argc, char **argv){
  int a,b;
  cout << "Enter a b: ";
  cin >> a >> b;
  
  cout << "Enter symble: ";
  char symble;
  cin >> symble;
  
  switch(symble){
    case '+':
      cout << a+b<<endl;
      break;
    case '-':
      cout << a-b << "\n";
      break;
    case '*':
      cout << a* b << endl;
      break;
    case '/':
      cout << a/b << endl;
      break;
    default:
      cout << "Wrong symbol use[+,-,*,/]"<< endl;
      break;
  }

  return 0;
}
