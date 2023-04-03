#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::string;

class Student{
  // attribute with there datatype
  // default it is private so we need to change it to public
  string pas;
public:
  string name;
  int age; // data memeber
  bool gender;

  Student(){
    cout << "Default Constructor run\n";
  }
  Student(string s, int a, int g){
    cout << "Parameterized Constructor run\n";
    name = s;
    age = a;
    gender = g;
  }
  Student(Student &a){
    cout << "Copy Constructor run\n";
    name = a.name;
    age = a.age;
    gender = a.gender;
  }
  ~Student(){
    cout << "Distructor Constructor run\n";
  }
  bool operator == (Student &a){
    cout << "== operator overloading\n";
    if(name == a.name && age == a.age and gender == a.gender)
      return true;
    return false;
  }
  // set value of private attribute outside the class
  void setPas(string s){
    pas = s;
  }
  // memeber funciton
  void getPas(){
    cout << pas << endl;
  }
  void printInfo(){
    cout << "Name: " << name << "Age: " << age << "Gender: " << (gender ? "female" : "male") << endl;
  }
};

int main(){
  Student a;
  a.name = "tim";
  a.age = 17;
  a.gender = 0;
  a.printInfo();

  Student b("Hello", 17, 1);
  Student c = a; // copy 
  Student d(a); // copy both are same
  c.setPas("Secrect!");
  c.getPas();
  cout << "operator overload: " << (b == c) << endl;

  // Create anrray with of size 3 of class Student
  Student arr[3];
  for(int i=0; i<3; i++){
    cout << "Enter name: ";
    cin >> arr[i].name;
    cout << "Enter age: ";
    cin >> arr[i].age;
    cout << "Enter gender: ";
    cin >> arr[i].gender;
  }
  for(int i=0; i<3; i++){
    arr[i].printInfo();
  }
  return 0;
}








