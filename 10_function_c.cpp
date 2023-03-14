#include <iostream>
using namespace std;
/* 
   returnType functionName(parameter1, parameter2){
      function body
   }
*/

// write a function to add 2 number.
int add(int num1, int num2){
  int sum = num1+num2;
  return sum;
}

int main(void){
  int a,b;cin>>a>>b;
  cout<<add(a,b)<<endl;
  return 0;
}
