#include <iostream>
using namespace std;

/* int main(){
  // let's write a program in which a person go every odd day and also check the pocket money
  int pocketMoney;
  cin>> pocketMoney;
  for(int date=1; date<=30; date++){
    if(date % 2 == 0)
      continue;
    if(pocketMoney <= 0)
      break;
    cout << "It's your Odd day "<< endl;
    pocketMoney = pocketMoney - 300;
  }

  return 0;
} */

// exe 1
// write a program to check if the given input is divide by 3 or not
/* int main(){
  int n;
  cin>>n;
  if(n % 3 ==0)
    cout << "Divide by 3"<< "\n";
  else
    cout << "Not divide by 3\n";

  return 0;
} */

// exe 2
// w a p to ehck if the given input is prime or not
/* int main(void){
  short int a;
  cin >> a;
  int i;
  for(i = 2; i<a; i++){
    if(a % i == 0){
      cout << a << " is not a prime number\n";
      break;
    }
  }
  if(i == a){
    cout << a << " is a prime number\n";
  }
  return 0;
} */


// exe 3
// write a program (wap) that user input two value and program return the prime number in range between this 2 input value

int main(void){
  int a,b;
  cin>>a>>b;

  for(int i = a; i<b; i++){
    int j;
    for(j = 2; j<i;j++){
      if( i % j == 0 ){
        cout << i << " is NOT a prime number\n";
        break;
      }
    }
    if(j == i)
      cout << i << " is a prime number\n";
  }
  return 0;
}
