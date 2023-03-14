#include <iostream>
using namespace std;

// 1. Inverted Pattern
/* 
1 2 3 4 5 6 7 8
1 2 3 4 5 6 7
1 2 3 4 5 6
1 2 3 4 5
1 2 3 4
1 2 3
1 2
1 */
/* int main(){
  int n;
  cin>>n;
  for(int i =1; i<=n; i++){
    for(int j=1; j<=n+1-i; j++){
      cout<< j << " ";
    }
    cout << endl;
  }
  return 0;
} */


// 2. 0-1 Pattern
/*
 1
 0 1
 1 0 1
 0 1 0 1
 1 0 1 0 1
 0 1 0 1 0 1
 1 0 1 0 1 0 1
 0 1 0 1 0 1 0 1 */
/* int main(void){
  int n;
  cin>>n;
  for(int i=1; i<=n; i++){
    for(int j=1; j<=i; j++){
      if((i+j)%2 == 0)
        cout << " 1";
      else
        cout << " 0";
    }
    cout <<endl;
  }
  return 0;
} */


// 3. Rhombus Pattern
/*     ********
      ********
     ********
    ********
   ********
  ********
 ********
******** */
/* int main(void){
  int n;cin>>n;
  for(int i=1; i<=n; i++){
    for(int j=1; j<=n-i; j++)
      cout << " ";
    for(int j=1; j<=n; j++)
      cout << "*";
    cout << "\n";
  }
  return 0;
} */


// 4. Number pattern
/*     1
      1 2
     1 2 3
    1 2 3 4
   1 2 3 4 5
  1 2 3 4 5 6
 1 2 3 4 5 6 7
1 2 3 4 5 6 7 8 */
/* int main(){
  int n; cin>>n;
  for(int i=1; i<=n; i++){
    for(int j=1; j<=n-i; j++){
      cout << " ";
    }
    for (int j=1; j<=i; j++)
      cout << j << " ";
    cout << endl;
  }
  return 0;
} */


// 5. Palindromic Pattern
/*            1
            2 1 2
          3 2 1 2 3
        4 3 2 1 2 3 4
      5 4 3 2 1 2 3 4 5
    6 5 4 3 2 1 2 3 4 5 6
  7 6 5 4 3 2 1 2 3 4 5 6 7
8 7 6 5 4 3 2 1 2 3 4 5 6 7 8 */
/* int main(void){
  int n;
  cin >> n;
  for(int i=1; i<=n; i++){
    int j;
    for(j=1; j<=n-i; j++)
      cout << "  ";
    int k =i;
    for(; j<=n; j++)
      cout << k--<< " ";
    k=2;
    for(; j<=n+i-1; j++){
      cout<< k++<< " ";
    }
    cout << endl;
  }
  return 0;
} */


// 6. Star pattern
/*     *
      ***
     *****
    *******
   *********
  ***********
 *************
***************
***************
 *************
  ***********
   *********
    *******
     *****
      ***
       * */
/* int main(void){
  int n; cin>>n;
  for(int i=1; i<=n; i++){
    for(int j=1; j<=n-i; j++)
      cout << " ";
    for(int j=1; j<= 2*i-1; j++)
      cout << "*";
    printf("\n");
  }
  for(int i=n; i>=1; i--){
    for(int j=1; j<=n-i; j++)
      cout << " ";
    for(int j=1; j<= 2*i-1; j++)
      cout << "*";
    printf("\n");
  }
  return 0;
} */


// 7. Zig-Zag Pattern
/*
  *   *   *   *   *   *   *   *   *   *   *   *    *
 * * * * * * * * * * * * * * * * * * * * * * * * *
*   *   *   *   *   *   *   *   *   *   *   *   * 
*/
int main(){
  int n; cin>>n;
  for(int i=1; i<=3; i++){
    for(int j=1; j<=n; j++){
      if(((i+j)%4==0) || (i==2 && j%4 == 0))
        cout << "*";
      else
        cout << " ";
    }cout<< endl;
  }
  return 0;
}
