#include<iostream>
using namespace std;
namespace A{
    class Myclass{
    public:
        void foo()
        {
            cout<<"This is Myclass::foo()from namespace A"<<endl;
        }
    };
}
namespace B{
    class Myclass{
    public:
        void foo()
        {
            cout<<"This is Myclass::foo()from namespace B"<<endl;
        }
    };
}
int main()
{
    A::Myclass obj1;
    obj1.foo();
    B::Myclass obj2;
    obj2.foo();
    return 0;
}





















