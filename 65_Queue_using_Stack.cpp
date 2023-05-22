#include <iostream>
#include <stack>
using namespace std;

// video no -> 80 : queue using stack

class que{
  stack<int> s1;
  stack<int> s2; // removed in method 2
public:
  void push(int x){
    s1.push(x);
  }
  // method 1
  int pop(){
    if(s1.empty() and s2.empty()){
      cout << "Queue Empty\n";
      return -1;
    }
    if(s2.empty()){
      while(!s2.empty()){
        s2.push(s1.top());
        s1.pop();
      }
    }int topval = s2.top();
    s2.pop();
    return topval;
  }
  int pop2(){
    if(s1.empty()){
      cout << "Queue empty\n";
      return -1;
    }
    int x = s1.top();
    s1.pop();
    if(s1.empty()) return x;
    int item = s1.pop();
    s.push(x);
    return item;
  }
  bool empty(){
    if(s1.empty() && s2.empty())
      return true;
    return false;
  }
};

int main(void){
  que st;
  st.push(1);
  st.push(2);
  st.push(3);
  cout << st.pop() << endl;
  cout << st.pop() << endl;
  return 0;
}
