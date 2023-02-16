#include <iostream>
#include <cmath>
using namespace std;

// Prime Number
/* int main(void){
  int n; cin>>n; bool flag=0;
  for(int i=2; i<=sqrt(n); i++){
    if(n%i == 0){
      cout<< "Non-Prime number"<<endl;
      flag=1;
      break;
    }
  }if(flag == 0){
    cout << "Prime "<<endl;
  }
  return 0;
} */

// Reverse a given number n
/* int main(){
  int n;cin>>n;int reverse=0;
  while(n>0){
    int lastdigit = n%10;
    reverse= reverse * 10 + lastdigit;
    n = n/10;
  }
  cout << reverse<<endl;
  return 0;
} */


//3. Armstrong number
/* int main(void){
  int n;cin>>n;int sum=0; int originaln=n;
  while(n>0){
    int lastdigit = n%10;
    sum += pow(lastdigit, 3);
    n = n/10;
  }
  if(sum == originaln)
    cout << "Armstrong"<<endl;
  else
    cout << "Not Armstrong"<<endl;

  return 0;
} */
