#include <iostream>
using namespace std;

// Base class 1
class Shape {
  protected:
    double width;
    double height;

  public:
    Shape(double w, double h) : width(w), height(h) {}
};

// Base class 2
class Color {
  protected:
    string color;

  public:
    Color(string c) : color(c) {}
};

// Derived class using multiple inheritance
class Rectangle : public Shape, public Color {
  public:
    Rectangle(double w, double h, string c) : Shape(w, h), Color(c) {}

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

