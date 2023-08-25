#include<iostream>
using namespace std;
class Shape{
public:
    double length;
    double width;
    public:
        void SetArea(double l,double w )
        {
            length=l;
            width=w;
        }
        void display(double &l,double &w)
        {
            length=l;
            width=w;
        }
    virtual float CalculateArea()
    {
        return length*width;
    }
};

class Triangle:public Shape{
    public:
    float CalculateArea()

    {
        double l,w;
        display(l,w);
        return 0.5*length*width;
    }
};
class Circle:public Shape{
    float CalculateArea()
    {
        double l,w;
        display(l,w);
        return 3.1416*length*length;
    }
};







int main()
{
    Shape *ptr;
    Triangle t;
    Circle c;
    t.SetArea(5,6);
    ptr=&t;
    cout<<ptr->CalculateArea()<<endl;
    c.SetArea(5,6);
    ptr=&c;
    cout<<ptr->CalculateArea()<<endl;



    return 0;
    }











