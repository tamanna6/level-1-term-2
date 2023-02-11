#include<iostream>
using namespace std;
class number {
    int a;
    int b;
    float c;
public:
    number(int x,int y,float z)
    {
     a=x;
     b=y;
     c=z;


    }
    show()
    {
        cout<<a<<b<<c;


    }
};
int main()
{
   number n1(10,20,30.5) ,n2(0,0,0.0),n3(0,0,0.0);
   n2=n1;
   n2.show();
   return 0;

}






