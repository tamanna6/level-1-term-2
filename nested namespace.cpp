#include<iostream>
using namespace std;
namespace scope1
{
void func()
{
    cout<<"tamanna"<<endl;
}
namespace scope2
{
void func()
{
    cout<<"hadi"<<endl;
}
}
}
using namespace scope1:: scope2;
int main()
{

    func();
    return 0;
}








