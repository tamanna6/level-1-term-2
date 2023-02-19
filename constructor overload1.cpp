#include<iostream>
using namespace std;
class Person{
private:
    int age;
public:
    Person()
    {
        age=40;
    }
    Person(int a)
    {
        age=a;
    }
    int Getage()
    {
        return age;
    }
};
int main()
{
    Person Person1,Person2(45);
    cout<<Person1.Getage()<<endl;
    cout<<Person2.Getage()<<endl;
    return 0;
}












