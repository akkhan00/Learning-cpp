#include <iostream>
using namespace std;

int main(int argc, char *argv[]){
  int a = 10; // stored in stack
  int *p = new int();
  *p = 10;
  cout << "*p: "<< *p<<endl;
  cout << "p: "<< p<< endl;

  delete(p); // deallocate memory
  p = new int[4];
  cout << *p << endl;
  cout << p << endl;
  delete [] p;
  p = NULL;

  return 0;
}
