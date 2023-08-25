#include<iostream>
using namespace std;
class Area{
    public:
    double dim1;
    double dim2;
public:
    void setdim(double x,double y)
    {
        dim1=x;
        dim2=y;
    }
    virtual double CalculateArea()=0;
};
class Rectangle:public Area{
public:
    double CalculateArea()
    {
        return dim1*dim2;
    }
};
class Triangle:public Area{
public:
    double CalculateArea()
    {
        return 0.5*dim1*dim2;
    }
};
class Circle:public Area{
public:
    double CalculateArea()
    {
        return 3.1416*dim1*dim1;
    }
};
int main()
{
    Area *p;
    Rectangle r;
    Triangle t;
    r.setdim(2,5);
    t.setdim(5,10);
    p=&r;
    cout<<p->CalculateArea()<<endl;
    p=&t;
    cout<<p->CalculateArea()<<endl;
    return 0;
}



























