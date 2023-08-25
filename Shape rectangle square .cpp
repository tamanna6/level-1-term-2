#include<iostream>
using namespace std;
class Shape{
protected:
    double dimension1;
    double dimension2;
public:
    Shape(double dim1,double dim2){
        dimension1=dim1;
        dimension2=dim2;
    }
    virtual double getArea()
    {
        return dimension1*dimension2;
    }
};
class Rectangle:public Shape{
public:
    Rectangle(double length,double width):Shape(length,width){
    }
        double getArea()
        {
            return dimension1*dimension2;
        }
};
class Square:public Shape{
public:
    Square(double side):Shape(side,side){}
    double getArea()
    {
        return dimension1*dimension2;
    }
};
int main()
{
    Rectangle r(4,6);
    Square s(9);
    r.getArea();
    s.getArea();
    cout<<r.getArea()<<endl;
    cout<<s.getArea()<<endl;
    return 0;
}



































