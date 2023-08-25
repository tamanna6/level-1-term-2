#include <iostream>

class Shape {
private:
    double dimension1;
    double dimension2;

public:
    Shape(double dim1, double dim2) : dimension1(dim1), dimension2(dim2) {}

    virtual double getArea() {
        return dimension1 * dimension2;
    }
};

class Rectangle : public Shape {
public:
    Rectangle(double length, double width) : Shape(length, width) {}

    double getArea() override {
        return dimension1 * dimension2;
    }
};

class Square : public Shape {
public:
    Square(double side) : Shape(side, side) {}

    double getArea() override {
        return dimension1 * dimension2;
    }
};

int main() {
    Rectangle rectangle(4.0, 5.0);
    Square square(6.0);

    std::cout << "Rectangle Area: " << rectangle.getArea() << std::endl;
    std::cout << "Square Area: " << square.getArea() << std::endl;

    return 0;
}
