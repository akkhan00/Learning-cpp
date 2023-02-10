#include <iostream>

int main() {
  std::cout << "hello world\n";

  // dataTypes in c++
  int a; // declearation
  a = 5; // initilisation
  float b = 4.4;
  char c = 'c';
  bool e = true;
  short int f = 4;
  long long int i = 45;
  unsigned j;
  signed k;
  double l;
  long m;

  std::cout<< "sizeof int "<< sizeof(a)<< std::endl;
  std::cout << "sizeof char " << sizeof(c) << std::endl;
  std::cout << "sizeof float " << sizeof(b) << "\n";
  std:: cout << "sizeof bool " << sizeof(e) << std::endl;
  std:: cout << "sizeof short int "<< sizeof(f) << std::endl;
  std::cout << "sizeof long int " << sizeof(i) << "\n";
  std::cout << "sizeof unsigned " << sizeof(j) << std::endl;
  std::cout << "sizeof signed  " << sizeof(k) << std::endl;
  std::cout << "sizeof double " << sizeof(l) << std::endl;
  std::cout << "sizeof long " << sizeof(m) << std::endl;

  return 0;
}
