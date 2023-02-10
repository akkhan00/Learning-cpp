// let's write a program to deside which girl to date according to pocketMoney

#include <iostream>
using namespace std;

// Program 1
/* int main(void){
  int savings;
  cin>> savings;

  if(savings > 5000){
    if(savings > 10000)
      cout << "Road Trip with Girl1" << endl;
    else
      cout << "Shopping with Girl1" << endl;
  }else if(savings > 2000){
    printf("Girl2\n");
  }else{
    cout << "Firends" << "\n";
  }

  return 0;
} */

// program 2
/* int main(void){
  int a,b,c;
  cin >> a >> b>> c;
  
  // find the max of (a,b,c)
  if(a>b){
    if(a>c)
      cout << "a is greater "<< a<< endl;
    else
      cout << "c is greater "<< c << endl;
  }else{
    if(b > c)
      cout << "b is greater " <<b<<endl;
    else
      cout << "c is greater " << c<<endl;
  }
  return 0;
} */

// program 3
int main(){
  int num;
  cin>> num;

  if(num % 2 == 0)
    cout << "Even\n";
  else
    cout << "Odd\n";
  return 0;
}
