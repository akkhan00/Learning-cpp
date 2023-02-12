#include <iostream>
using namespace std;

// 1. Rectangle Pattern
/* int main(void){
  int row, col;
  cin>>row>>col;

  for(int i=1; i<=row; i++){
    for(int j=1; j<=col; j++){
      cout<< "* ";
    }cout<<endl;
  }
  return 0;
} */

// 2. Hollow Rectangle Pattern
/* int main(void){
  int row, col;
  cin>>row>>col;
  for(int i=1; i<=row; i++){
    for(int j=1; j<=col; j++){
      if(i==1 || i==row || j==1 || j==col)
        cout<< "*";
      else
        cout << " ";
    }cout << endl;
  }
  return 0;
} */

// 3. Inverted Half Pyramid
/* int main(){
  int n;cin >>n;
  for(int i =n; i>=1; i--){
    for(int j=1; j<=i; j++){
      cout<<"* ";
    }
    cout <<endl;
  }
  return 0;
} */

// 4. Half Pyramid After 180 Roatation
/* int main(){
  int n;
  cin>>n;
  for(int i=1; i<=n; i++){
    for(int j=1; j<=n; j++){
      if(j <=n-i)
        cout << " ";
      else
        cout << "*";
    }
    cout << endl;
  }
  return 0;
} */


// 5. Half Pyramid Using Numbers
/* int main(void){
  int n;
  cin >> n;
  for(int i = 1; i<=n; i++){
    for(int j = 1; j<=i; j++){
      cout<< i << " ";
    }
    cout << "\n";
  }
  return 0;
} */


// 6. Floyd's Triangle
/* int main(void){
  int n;
  cin >> n;
  int count = 1;
  for(int i = 1; i<=n; i++){
    for(int j=1; j<=i; j++){
      cout << count++ << " ";
    }
    cout << endl;
  }
  return 0;
} */


// 7. Butterfly Pattern
/*
*            *
**          **
***        ***
****      ****
*****    *****
******  ******
**************
**************
******  ******
*****    *****
****      ****
***        ***
**          **
*            * */
/* int main(){
  int n;
  cin >> n;
  for(int i = 1; i<=n; i++){
    for(int j = 1; j<=i; j++)
      cout << "*";
    int space = 2*n - 2*i;
    for(int j=1; j<=space; j++)
      cout << " ";
    for(int j =1; j<=i; j++){
      cout << "*";
    }
    cout << endl;
  }
  for(int i = n; i>=1; i--){
    for(int j = 1; j<=i; j++)
      cout << "*";
    int space = 2*n - 2*i;
    for(int j=1; j<=space; j++)
      cout << " ";
    for(int j =1; j<=i; j++){
      cout << "*";
    }
    cout << endl;
  }
  return 0;
}
 */



