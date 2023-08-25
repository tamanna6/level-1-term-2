#include<iostream>
using namespace std;
class Myclass{
public:
    int a;
    float b;
public:
    Myclass(int x,float y)
    {
        cout<<"call constructor"<<endl;
        a=x;
        b=y;

    }
   ~ Myclass()
   {
       cout<<"Call Destructor"<<endl;
   }
   void show()
   {
       cout<<a<<" "<<b<<endl;
   }
};
int main()
{
    Myclass obj(5,5.5);
    obj.show();
    return 0;
}












