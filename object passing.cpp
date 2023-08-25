#include<iostream>
using namespace std;
class Myclass {
public:
    int value;
public:
    Myclass()
    {
        cout<<"Default Constructor Called"<<endl;
        value=0;
    }
    Myclass(int v)
    {
        cout<<"Parameterized Constructor Called"<<endl;
        value=v;
    }
    ~Myclass()
    {
        cout<<"Destructor Called"<<endl;
    }
};
void func(Myclass obj)
{
    cout<<obj.value<<endl;
}
int main()
{
    Myclass obj1(42);
    func(obj1);
    cout<<obj1.value<<endl;
    return 0;

}







