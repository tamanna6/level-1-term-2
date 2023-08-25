#include<iostream>
using namespace std;
class A{
    public:
    void Parentfunction()
    {
        cout<<"This is parent A"<<endl;
    }
};
class B:public A{
    public:
    void childfunction()
    {
        cout<<"This is child B"<<endl;
    }
};
class C:public A{
public:
    void childfunction()
    {
        cout<<"This is child C"<<endl;
    }
};
int main()

{
    B b;
    b.Parentfunction();
    b.childfunction();
    C c;
    c.Parentfunction();
    c.childfunction();
    return 0;


}















