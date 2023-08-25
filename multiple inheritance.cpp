#include <iostream>
using namespace std;

// Base class 1
class Shape {
  public:
virtual      double getArea() = 0;
};

// Base class 2
class Color {
  public:
   virtual  string getColor() = 0;
};

// Derived class using multiple inheritance
class Rectangle : public Shape, public Color {
  private:
    double width;
    double height;
    string color;

  public:
    Rectangle(double w, double h, string c) : width(w), height(h), color(c) {}

    double getArea() {
        return width * height;
    }

    string getColor() {
        return color;
    }
};

int main() {
  Rectangle rect(5.0, 3.0, "red");

  cout << "Area of rectangle: " << rect.getArea() << endl;
  cout << "Color of rectangle: " << rect.getColor() << endl;

  return 0;
}

