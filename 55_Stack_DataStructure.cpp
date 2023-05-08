#include <iostream>


// LIFO -> last in first out
// 1.Operations
//  push(x), pop(), top(), empty()
#define n 100

class stack{
  int *arr; int top;
  public:
    stack(){
      arr = new int[n];
      top = -1;
    }
    void push(int x){
      if(top == n-1){
        std::cout << "Stack Overflow\n";
        return;
      }top++; 
      arr[top] = x;
    }
    int Top(){
      if(top == -1){
        std::cout << "No Element in Stack\n";
        return -1;
      }return arr[top];
    }
    bool empty(){
      return top == -1;
    }
    void pop(){
      if(top == -1){
        std::cout << "No Element to Pop\n";
        return;
      }top --;
    }
};

int main(){
  stack st;
  st.push(1);
  st.push(2);
  st.push(3);
  
  while(!st.empty()){
    std::cout << st.Top()<< " ";
    st.pop();
  }std::cout << std::endl;
  return 0;
}
