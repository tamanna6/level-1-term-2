#include<iostream>
using namespace std;
namespace scope1
{
void funcA()
{
    cout<<"Inside first scope"<<endl;

}
}
namespace scope2
{

void funcA()
{
    cout<<"Inside second scope"<<endl;
}
}

int main()
{
   scope1:: funcA();
   scope2::funcA();
    return 0;
}









