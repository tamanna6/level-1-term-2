#include<iostream>
using namespace std;
class truck;
class car{
private:
    int passengers;
    float speed;
    int weight;
public:
    car(int p,float s,int w)
    {
        passengers=p;
        speed=s;
        weight=w;
    }
    friend int sp_greater(car c,truck t);
};
class truck{
private:
    int passengers;
    float speed;
    int weight;
public:
    truck(int p,float s,int w)
    {
        passengers=p;
        speed=s;
        weight=w;
    }
    friend int sp_greater(car c,truck t);
};
int sp_greater(car c,truck t)
{
    return c.speed-t.speed;
}
int main()
{
    car c(6,56.7,90);
    truck t(10,65.5,100);
    cout<<"Comparing the speed of car and truck"<<endl;
    int h=sp_greater(c,t);
    if (h<0) cout<<"Truck is faster"<<endl;
    else if (h==0)cout<<"Both have same speed"<<endl;
    else cout<<"car is faster"<<endl;
    return 0;
}

















