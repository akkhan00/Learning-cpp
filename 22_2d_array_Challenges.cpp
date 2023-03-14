#include <iostream>
using namespace std;

// 1. Matrix Transpose
/* int main(int argc, char *argv[]){
  int A[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
  for(int i=0; i<3; i++){
    for(int j=i; j<3; j++){
      int temp = A[i][j];
      A[i][j] = A[j][i];
      A[j][i] = temp;
    }
  } 
  // print the transpose array
  for(int i=0; i<3; i++){
    for(int j=0; j<3; j++)
      cout << A[i][j] << " ";
    cout << endl;
  }
  return 0;
} */


// 2. Matrix Multiplication
/* int main(int argc, char ** argv){
  int n1, n2, n3; cin >> n1 >> n2 >> n3;
  int m1[n1][n2], m2[n2][n3];
  // for m1
  for(int i=0; i<n1; i++){
    for(int j=0; j<n2; j++)
      cin >> m1[i][j];
  }
  // for m2
  for(int i=0; i<n2; i++){
    for(int j=0; j<n3; j++)
      cin >> m2[i][j];
  }

  int ans[n1][n3];
  for(int i=0; i<n1; i++){
    for(int j=0; j<n3; j++)
      ans[i][j] = 0;
  }

  for(int i=0; i<n1; i++){
    for(int j=0; j<n3; j++){
      for(int k=0; k<n2; k++){
        ans[i][j] += m1[i][k] * m2[k][j];
      }
    }
  }
  // print 
  for(int i=0; i<n1; i++){
    for(int j=0; j<n3; j++){
      cout << ans[i][j] << " ";
    }
    cout << endl;
  }
  return 0;
} */


// 3. Matrix Search
int main(void){
  int n, m, target; cin >> n>> m >> target;
  int arr[n][m];
  for(int i=0; i<n; i++){
    for(int j=0; j<m; j++)
      cin >> arr[i][j];
  }

  // a. Linear Search (brute force approach)
  /* for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
      if(arr[i][j] == target)
        cout << "Found\n";
    }
  } */

  // what if it's row and columns are sorted in acending order
  int r=0, c=m-1;
  bool found = false;
  while (r < n and c >= 0){
    if(arr[r][c] == target)
      found = true;
    if(arr[r][c] > target)
      c--;
    else
      r++;
  }
  if(found)
    cout << "Element found\n";
  else
    cout << "Element Not found" << endl;


  return 0;

}
