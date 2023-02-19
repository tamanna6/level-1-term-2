#include<iostream>
using namespace std;
class Cube{
private:
    double side;
public:
    Cube()
    {
        side=5.6;

    }
    Cube(double s1)
    {
        side=s1;
    }
    ~Cube()
    {

    }
    double Volume()
    {
        return (side*side*side);
    }
};
int main()
{
    Cube Cube1,Cube2(2.3);
    cout<<Cube1.Volume()<<endl;
    cout<<Cube2.Volume()<<endl;
    return 0;

}











