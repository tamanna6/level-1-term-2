#include <iostream>

using namespace std;

class MyClass {
public:
  int value;

  MyClass() {
    value = 0;
  }

  MyClass(int val) {
    value = val;
  }

  MyClass operator+( MyClass& obj)  {
    MyClass result;
    result.value = value + obj.value;
    return result;
  }
};

int main() {
  MyClass obj1(10);
  MyClass obj2(20);
  MyClass obj3 = obj1 + obj2;

  cout << "obj1.value: " << obj1.value << endl;
  cout << "obj2.value: " << obj2.value << endl;
  cout << "obj3.value: " << obj3.value << endl;

  return 0;
}
