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

  bool operator<( MyClass& obj)  {
    return value < obj.value;
  }


};

int main() {
  MyClass obj1(10);
  MyClass obj2(20);

  if (obj1 < obj2) {
    cout << "obj1 is less than obj2" << endl;
  } else {
    cout << "obj1 is not less than obj2" << endl;
  }


  return 0;
}
