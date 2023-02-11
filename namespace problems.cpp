#include<iostream>
using namespace std;
namespace scope1{

void func()
{
    cout<<"Tamanna"<<endl;
}
}
namespace scope2{
   void func()
   {
       cout<<"Hadi"<<endl;
   }
}

int main()
{
     scope1::func();
     scope2::func();
    return 0;
}










