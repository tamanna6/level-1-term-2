#include <iostream>
#include <string>

using namespace std;

class MyClass {
public:
  void print() {
    cout << "Printing from MyClass" << endl;
  }

  void print(int num) {
    cout << "Printing number " << num << " from MyClass" << endl;
  }

  void print(string str) {
    cout << "Printing string \"" << str << "\" from MyClass" << endl;
  }
};

void print() {
  cout << "Printing from global function" << endl;
}

void print(int num) {
  cout << "Printing number " << num << " from global function" << endl;
}

void print(string str) {
  cout << "Printing string \"" << str << "\" from global function" << endl;
}

int main() {
  MyClass obj;

  obj.print();
  obj.print(42);
  obj.print("Hello world");

  print();
  print(42);
  print("Hello world");

  return 0;
}
