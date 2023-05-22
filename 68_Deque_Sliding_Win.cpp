#include <functional>
#include <iostream>
#include <deque>
#include <set>
#include <vector>

using namespace std;

int main(){
  int n, k; cin >> n >> k;
  vector<int> a(n);
  for(auto &i: a)
    cin >> i;
  deque<int> q;
  vector<int> ans;
  for(int i=0; i<k; i++){
    while(!q.empty() and a[q.back()] < a[i]){
      q.pop_back();
    }
    q.push_back(i);
  }
  ans.push_back(a[q.front()]);
  for(int i=k; i<n; i++){
    if(q.front() == i-k){
      q.pop_front();
    }
    while(!q.empty() and a[q.back()] < a[i]){
      q.pop_back();
    }
    q.push_back(i);
    ans.push_back(a[q.front()]);
  }
  for(auto i: ans)
    cout << i << " ";
}

// nlogn
int main2(void){
  int x = 0; // myself var
  int n, k; cin >> n >> k;
  vector<int> a(n);
  for(auto &i: a)
    cin >> i;
  
  multiset<int, greater<int>> s;
  vector<int> ans;
  for(int i=0; i<k; i++)
      s.insert(a[i]);
  ans.push_back(*s.begin());
  for(int i=k; i<n; i++){
    s.erase(s.lower_bound(a[i-x]));
    s.insert(a[i]);
    ans.push_back(*s.begin());
  }
  for(auto i: ans)
    cout << i << " ";
  return 0;
}

int main1 (int argc, char *argv[]) {
  deque<int> dq;
  dq.push_back(1);
  dq.push_back(2);
  dq.push_front(3);
  dq.push_front(4);
  for(auto i: dq)
    cout << i << " ";
  cout << endl;
  dq.pop_back();
  dq.pop_front();
  for(auto i: dq) cout << i << " ";
  cout << "\n";
  return 0;
}
