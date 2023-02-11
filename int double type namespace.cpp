#include<iostream>
using namespace std;
namespace scope1
{
int  value()
{
    return(5) ;
}
}
namespace scope2
{
double x=100;
double   value()
{
    return (2*x);
}

}
int main()
{
    cout<< scope1::value()<<endl; ;
    cout<< scope2:: value()<<endl;
    cout<< scope2::x;
    return 0;
}







