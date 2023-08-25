#include<iostream>
using namespace std;
namespace A{
    void foo()
    {
        cout<<"This is function foo() from namespace A"<<endl;

    }
}
namespace B{
    void foo()
    {
        cout<<"This is function foo() from namespace B"<<endl;
    }
}
void foo(int x)
{
    cout<<x<<endl;
}
void foo(double x)
{
    cout<<x<<endl;
}
int main()
{
    A::foo();
    B::foo();
    foo(6);
    foo(6.17);
    return 0;
}













