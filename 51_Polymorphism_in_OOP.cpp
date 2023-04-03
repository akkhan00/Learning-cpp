#include <iostream>
using std::cout;


// Types
/*
Polymorphism
1. Compile time
a). Funciton overloading
b). operator overloading

2. Run time
a). vertual function

*/

// 1. funciton overloading
/* class Apple{
public:
  void func(){
    cout << "function without argument\n";
  }
  void func(int x){
    cout << "funciton with int argument\n";
  }
  void func(double x){
    cout << "funciton with double argument\n";
  }
};
int main(){
  Apple a;
  a.func();
  a.func(1);
  a.func(1.01);
  return 0;
} */

// 2. Operator overloading
/* class Complex{
private:
  int real, imag;
public:
  Complex(int r, int i){
    real = r;
    imag = i;
  }
  Complex operator + (Complex const &obj){
    Complex res(0, 0);
    res.imag = imag + obj.imag;
    res.real = real + obj.real;
    return res;
  }
  void display(){
    cout << real << " +i" << imag << "\n";
  }
};
int main(){
  Complex c1(12, 7), c2(6, 7);
  Complex c3 = c1 + c2;
  c3.display();
  return 0;
} */

// 3. Function Overriding (virtual Funciton)
class Base{
public:
  // we change this in run time not in compile time
  virtual void print(){
    cout << "Base class print\n";
  }
  void display(){
    cout << "Base class display\n";
  }
};
class Derived: public Base{
public:
  void print(){
    cout << "Derived class print\n";
  }
  void display(){
    cout << "Derived class diaplay\n";
  }
};
int main(){
  Base *baseptr;
  Derived d;
  baseptr = &d;
  baseptr->print();
  return 0;
}









