#include <iostream>
using namespace std;

/* int main(int argc, char **argv){
  int a = 10;
  int *ptr;
  ptr = &a;
  cout << "ptr = " << ptr << endl;
  cout << "&a = " << ptr << endl;
  cout << "*ptr = " << *ptr << endl;
  cout << "Before value of a: " << a << endl;
  *ptr = 50;
  cout << "After value of a: " << a << endl;
  return 0;
} */


// Pointer Arithmetic ++, --, +, -
/* int main(void){
  int a= 10;
  int *ptr = &a;
  cout << "ptr: " << ptr << endl;
  ptr++;
  cout << "ptr++: " << ptr << endl;
  cout << "*ptr++: "<< *ptr<< endl;

  return 0;
} */


// Pointer in Arrays
//int main(void){
 // int arr[] = {10, 20, 30};

  // 1. method
/*   cout << *arr << endl;// this will print the first value of the Arrays
  int *ptr = arr;
  for(int i=0; i<3; i++){
    cout << *ptr << endl;
    ptr ++;
  } */


  // 2. method
  /* for(int i=0; i<3; i++){
    cout << *(arr + i) << endl;
    // arr++; // illegal
  } */

  //return 0;
//}
//

// Pointer to Pointer
/* //
int main(){
  int a=10;
  int *p = &a;
  cout << "*p: "<< *p<< endl;
  cout << "p: "<< p <<endl;
  
  int **q = &p;
  cout << "**q: "<< **q<<endl;
  cout << "*q: "<< *q<<endl;
  cout << "q: "<< q<<endl;
  cout << "&p: "<< &p << endl;

  return 0;
} */


// Passing Pointer to Function
void swap(int *a, int *b){
  int temp = *a;
  *a = *b;
  *b = temp;
}
int main(void){
  int a = 1;
  int b = 20;
  cout << "a: " << a << " || b: " << b << endl;
  swap(&a, &b);
  cout << "a: " << a << " || b: " << b << endl;

  return 0;
}
