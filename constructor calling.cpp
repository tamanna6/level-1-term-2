#include<iostream>
using namespace std;
class Myclass{
private:
    int a;
    float b;
public:
    Myclass(int x,float y)
    {
        a=x;
        b=y;
    }
    Myclass(int x)
    {

        a=x;
    }
    void show_ab()
    {
        cout<<a<<" "<<b<<endl;
    }
};
int main()
{
    Myclass obj(7,6.8);
    obj.show_ab();
    Myclass obj2(6);
    obj2.show_ab();
    return 0;

}





