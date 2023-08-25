#include <iostream>
using namespace std;

class Car;

class Truck {
  private:
    int weight;

  public:
    Truck(int w) : weight(w) {}

    friend void compareWeight(Truck t, Car c);
};

class Car {
  private:
    int weight;

  public:
    Car(int w) : weight(w) {}

    friend void compareWeight(Truck t, Car c);
};

void compareWeight(Truck t, Car c) {
  if (t.weight > c.weight) {
    cout << "The truck is heavier than the car." << endl;
  } else if (t.weight < c.weight) {
    cout << "The car is heavier than the truck." << endl;
  } else {
    cout << "The truck and car weigh the same." << endl;
  }
}

int main() {
  Truck myTruck(5000);
  Car myCar(3000);

  compareWeight(myTruck, myCar);

  return 0;
}


