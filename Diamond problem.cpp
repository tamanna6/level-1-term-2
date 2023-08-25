#include <iostream>
using namespace std;

// Base class
class Vehicle {
  public:
    Vehicle() {
        cout << "This is a vehicle." << endl;
    }
};

// First derived class
class Car : virtual public Vehicle {
  public:
    Car() {
        cout << "This is a car." << endl;
    }
};

// Second derived class
class Bike : virtual public Vehicle {
  public:
    Bike() {
        cout << "This is a bike." << endl;
    }
};

// Derived class from both Car and Bike
class Hybrid : public Car, public Bike {
  public:
    Hybrid() {
        cout << "This is a hybrid." << endl;
    }
};

int main() {
  Hybrid h;
  return 0;
}

