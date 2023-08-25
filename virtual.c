#include<iostream>
using namespace std;
class Shape{
private:
    int length;
    int width;
    virtual float CalculateArea()
    {
        return length*width;
    }
};
class Triangle:public Shape{
    float CalculateArea()
    {
        return 0.5*length*width;
    }
};
class Circle:public Shape{
    float CalculateArea()
    {
        return 3.1416*length*width;
    }


};
int main()
{
    Shape *ptr;
    triangle t;
    circle c;
    ptr=&t;
    ptr->CalculateArea();
    ptr=&c;
    ptr->CalculateArea();
    return 0;
    }











