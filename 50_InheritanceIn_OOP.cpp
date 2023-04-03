#include <iostream>
using std::cout;
using std::cin;
using std::endl;

// Single Inheritance
/* class A{
public:
  void func(){
    cout << "Inherted from A\n";
  };
};
class B: public A{
public:
};
int main(){
  B a;
  a.func();
  return 0;
} */


// multiple Inheritance
/* class A{
public:
  void Afunc(){
    cout << "Inherted from A" << endl;
  }
};
class B{
public:
  void Bfunc(){
    cout << "Inherted from B" << endl;
  }
};
class C: public A, public B{
public:
};
int main(){
  C a;
  a.Afunc();
  a.Bfunc();
} */


// Multi Level Inhertenace
/* class A{
public:
  void Afunc(){
    cout << "Inherted from A" << endl;
  }
};
class B: public A{
public:
  void Bfunc(){
    cout << "Inherted from B" << endl;
  }
};
class C : public B{
public:
};
int main(){
  C a;
  a.Afunc();
  a.Bfunc();
} */


// Hybrid Inhertance
/* class A{
public:
  void Afunc(){
    cout << "Afunc run\n";
  }
};
class B: public A{
public:
  void Bfunc(){
    cout << "Bfunc run" << endl;
  }
};
class C{
public:
  void Cfunc(){
    cout << "Cfunc run" << endl;
  }
};
class D: public B, public C{
public:
  void Dfunc(){
    cout << "Dfunc run"<<endl;
  }
};
int main(){
  D d;
  d.Afunc();
  d.Bfunc();
} */


// Hierarachical Inheritance 
/* class A{
public:
  void funcA(){
    cout << "funcA run" << endl;
  }
};
class B: public A{
public:
  void funcB(){
    cout << "funcB run" << endl;
  }
};
class C: public A{
public:
  void funcC(){
    cout << "funcC run" << endl;
  }
};
class D: public B{
public:
  void funcD(){
    cout << "funcD run" << endl;
  }
};
class E: public B{
public:
  void funcE(){
    cout << "funcE run\n";
  }
};
class F: public C{
public:
  void funcF(){
    cout << "FuncF run\n";
  }
};
class G: public C{
public:
  void funcG(){
    cout << "funcG run\n";
  }
};
int main(){
  G g;
  D d;
  g.funcA();
  d.funcA();
} */


// Question:.
//1. CBSE 2019 Computer Science








