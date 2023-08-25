
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


  MyClass operator++(int) {
    MyClass temp(value);
    value++;
    return temp;
  }

  MyClass operator-()  {
    return MyClass(-value);
  }
};

int main() {
  MyClass obj1(10);
  MyClass obj2 = obj1++;

  cout << "obj1.value: " << obj1.value << endl;
  cout << "obj2.value: " << obj2.value << endl;

  MyClass obj3(5);
  MyClass obj4 = -obj3;

  cout << "obj3.value: " << obj3.value << endl;
  cout << "obj4.value: " << obj4.value << endl;

  return 0;
}
