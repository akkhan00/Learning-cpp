#include <climits>
#include <iostream>
using namespace std;

// 1. First Repeating Element
/* int main(void) {
  int n;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++)
    cin >> a[i];

  int N = 1000;
  int idx[N];
  for (int i = 0; i < N; i++) {
    idx[i] = -1;
  }

  int minidx = INT_MAX;
  for (int i = 0; i < n; i++) {
    if (idx[a[i]] != -1)
      minidx = min(minidx, idx[a[i]]);
    else
      idx[a[i]] = i;
  }
  if (minidx == INT_MAX)
    cout << "-1" << endl;
  else
    cout << minidx + 1 << endl;

  return 0;
} */


// 2. Subarray with Gien Sum
/* int main(void){
  int n,s; cin >> n >> s; int a[n];
  for(int i=0; i<n; i++){
    cin >> a[i];
  }
  int i=0; int j=0; int st=-1; int en=-1, sum=0;
  while (j < n && sum+a[j] <= s){
    sum += a[j];
    j++;
  }

  if(sum == s){
    cout << i+1 << " " << j << endl;
    return 0;
  }

  while (j < n){
    sum += a[j];
    while (sum > s)
      sum -= a[i];i++;
    if(sum == s){
      st = i+1;
      en = j+1;
      break;
    }
    j++;
  }

  cout << st << " " << en << endl;
  return 0;
} */


// 3. Smallest Positive Missing Number
int main(int argc, char *argv[]){
  int n; cin >> n; int a[n];
  for(int i=0; i<n; i++)
    cin >> a[i];

  // const int N = 1e6+2;
  const int N = 10000;
  bool check[N];
  for(int i=0; i<N; i++)
    check[i] = false;

  for(int i=0; i<n; i++){
    if(a[i] >= 0)
      check[a[i]] = 1;
  }int ans = -1;

  for(int i=1;i<n; i++){
    if(check[i] == false){
      ans = i;
      break;
    }
  }
  cout << ans << endl;

  return 0;
}
