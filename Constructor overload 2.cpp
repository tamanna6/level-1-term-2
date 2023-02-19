#include<iostream>
using namespace std;
class Room{
private:
    double length;
    double breadth;
public:
    Room()
    {
        length=4.8;
        breadth=3.3;
    }
    Room(double l,double b)
    {
        length=l;
        breadth=b;
    }
    Room(double len)
    {
        length=len;
        breadth=5.6;
    }
    double Calculatearea()
    {
        return (length*breadth);
    }
};
int main()
{
    Room Room1,Room2(6.7,2.3),Room3(7.8);
    cout<<Room1.Calculatearea()<<endl;
    cout<<Room2.Calculatearea()<<endl;
    cout<<Room3.Calculatearea()<<endl;
    return 0;
}













