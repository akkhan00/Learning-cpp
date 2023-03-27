#include <iostream>
#include <vector>
#include <algorithm> // sort function
using namespace std;

void print(vector<int> v){
  for (auto element:v)
    cout << element<<endl;
}

int main(int argc, char *argv[]){
  vector<int> v;
  v.push_back(1);
  v.push_back(4);
  v.push_back(3);

  // 1. forloop
/*   for(int i=0; i<v.size(); i++)
    cout << v[i] << endl; */

  // 2. loop 
/*   vector<int>::iterator it;
  for(it=v.begin(); it!=v.end(); it++)
    cout << *it << endl; */

  // 3. loop method
/*   for(auto element: v)
    cout << element << endl; */
  
/*   v.pop_back();
  print(v); */

  vector<int> v2 (3, 50); // 50, 50, 50
  // print(v2); 
  // swap(v, v2);
  // print(v2);

  print(v);
  sort(v.begin(), v.end());
  print(v);
  return 0;
}

