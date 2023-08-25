#include <iostream>
using namespace std;

class Person {
   public:
      string name;
      int age;

      void display() {
         cout << "Name: " << name << endl;
         cout << "Age: " << age << endl;
      }
};

int main() {
   // Creating an object of the Person class
   Person person1;

   // Assigning values to the object's attributes
   person1.name = "John";
   person1.age = 30;

   // Calling the object's display() method
   person1.display();

   return 0;
}
