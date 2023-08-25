#include<iostream>
using namespace std;
class Myclass{
public:
    int value;
public:
    Myclass()
    {
        cout<<"Default Constructor called"<<endl;
        value=0;
    }
    Myclass(int v)
    {
        cout<<"Parameterized Constructor Called"<<endl;
        value=v;
    }
    ~Myclass ()
    {
        cout<<"Destructor Called"<<endl;
    }
};
int main()
{
    Myclass obj1(42);
    cout<<obj1.value<<endl;
    Myclass obj2;
    obj2=obj1;
    cout<<obj2.value<<endl;
    return 0;

}









