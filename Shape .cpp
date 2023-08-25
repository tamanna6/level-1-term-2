#include <iostream>

using namespace std;

class Shape {
protected:
    double length;
    double width;
public:
    Shape(double len, double wid){
        length=len;
        width=wid;
    }
    virtual float calculateArea()  {
        cout<< "Default Shape Area: ";
        return length * width;
    }
};

class Triangle : public Shape {

public:
    Triangle(double len, double wid): Shape(len, wid) {  }
    float calculateArea()  {
        cout<< "Triangle Area: ";
        return 0.5 * length * width;
    }
};

class Circle : public Shape {

public:
    Circle(double len) : Shape(len, 0){
    }
    float calculateArea()  {
        cout<< "Circle Area: ";
        return 3.1416 * length * length;
    }
};

class Rectangle : public Shape {
public:
    Rectangle(double len, double wid) : Shape(len, wid) {}

};
int main() {

Shape *ptr;
Triangle t(5,10);
Circle c(5);
Rectangle r(5,10);
ptr= &t;
cout<< ptr->calculateArea()<<endl;
ptr=&c;
cout<< ptr->calculateArea()<<endl;
ptr=&r;
cout<< ptr->calculateArea()<<endl;

    return 0;
}
