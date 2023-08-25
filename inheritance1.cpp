#include<iostream>
using namespace std;
class Animal{
protected:
    string name;
    int age;
public:
    Animal(string n,int a)
    {
        name=n;
        age=a;
    }
    void eat()
    {
        cout<<name <<"is eating"<<endl;
    }
    void sleep()
    {
        cout<<name <<"is sleeping"<<endl;
    }
};
class Cat:public Animal{
public:
    Cat(string n,int a):Animal(n,a)
    {
        name=n;
        age=a;
    }
    void meow()
    {
        cout<<name <<"says meow"<<endl;
    }
};
int main()
{
    Cat c("Hadi ",25);
    c.eat();
    c.sleep();
    c.meow();
    return 0;
}











