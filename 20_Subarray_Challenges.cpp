#include <iostream>
#include <climits>
using namespace std;

// 1. Print the Possible Subarray of an Array
/* int main(void){
  int n; cin >> n; int a[n];
  for(int i=0; i<n; i++)
    cin >> a[i];

  for(int i=0; i<n; i++){
    for(int j=i; j<n; j++){
      for(int k=i; k<=j; k++)
        cout << a[k] << " ";
      cout << endl;
    }
  }
  return 0;
} */


// 2. Maximun Subarray Sum
/*int main(void){
  int n; cin >> n; int a[n];
  for(int i=0; i<n; i++)
    cin >> a[i];
 */ 
  // a). BruteForce Approach
/*   int maxSum = INT_MIN;
  for(int i=0; i<n; i++){
    for(int j=i; j<n; j++){
      int sum = 0;
      for(int k=i; k<=j; k++)
        sum += a[k];
      maxSum = max(maxSum, sum);
    }
  }
  cout << "MaxSum of Subarray: " << maxSum << endl; */


  // b). Cumulative Sum Approach
/*   int currSum[n+1]; currSum[0] = 0;
  for(int i=1; i<=n; i++)
    currSum[i] = currSum[i-1] + a[i-1];
  int maxSum = INT_MIN;
  for(int i=1; i<=n; i++){
    int sum = 0;
    for(int j=0; j<i; j++){
      sum = currSum[i] - currSum[j];
      maxSum = max(sum, maxSum);
    }
  }
  cout << maxSum << "\n"; */


  // c). Kadane's Algorithm
  /*int currentSum = 0;
  int maxSum = INT_MIN;
  for(int i=0; i<n; i++){
    currentSum += a[i];
    if(currentSum < 0) currentSum = 0;
    maxSum = max(maxSum, currentSum);
  }
  cout << maxSum << endl;

  return 0;
}*/


// 3. Maximun Circular Subarray Sum
/* int kadane(int arr[], int n){
  int currentSum =0;
  int maxSum = INT_MIN;
  for(int i=0; i<n; i++){
    currentSum += arr[i];
    if(currentSum < 0)
      currentSum = 0;
    maxSum = max(maxSum, currentSum);
  }
  return maxSum;
}
int main(int argc, char ** argv){
  int n; cin >> n; int a[n];
  for(int i=0; i<n; i++){
    cin >> a[i];
  }

  int wrapsum;  int nonwrapsum;
  nonwrapsum = kadane(a, n); int totalsum = 0;
  for(int i=0; i<n; i++){
    totalsum += a[i]; a[i] = -a[i];
  }

  wrapsum = totalsum + kadane(a, n);
  cout << max(wrapsum, nonwrapsum) << endl;
  return 0;
} */


// 4. PAIR SUM PROBLEM
//
// a).BruteForce Approach
bool pairsum(int arr[], int n, int k){
  for(int i=0; i<n; i++){
    for(int j= i+1; j<n; j++){
      if(arr[i] + arr[j] == k){
        cout << i << " " << j<< endl;
        return true;
      }
    }
  }
  return false;
}

// b). For Sorted Array [O(n)]
bool pairsum2(int arr[], int n, int k){
  int low =0; int high = n-1;
  while (low < high){
    if(arr[low] + arr[high] == k){
      cout << low << " " << high << endl;
      return true;
    }else if(arr[low] + arr[high] > k)
      high--;
    else
      low ++;
  }
  return false;
}

int main(void){
  int n; cin >> n; int a[n];
  for(int i=0; i<n; i++)
    cin >> a[i];
   int k = 31;
   cout << pairsum2(a, n, k)<< endl;
   return 0;
}
