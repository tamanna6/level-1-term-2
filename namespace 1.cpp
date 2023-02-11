#include<iostream>
using namespace std;

namespace scope1
{

void functionA()
{


    cout<<"inside first scope"<<endl;

}

}

namespace scope2
{

void functionA()

{

    cout<<"inside second scope"<<endl;

}


}
/*
 void functionA(){
  cout<<" my space"<<endl;

}
*/
using namespace scope2;
using namespace scope1;
int main()
{

    scope1::functionA();
    scope2::functionA();

    //functionA();
    return 0;

}





















