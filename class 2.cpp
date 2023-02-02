#include<iostream>
using namespace std;
class Myclass
{
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

    void showab()
    {
        cout<<a<<" "<<b<<endl;
    }
};
int main()
{
    Myclass obj(7,8.9);

    obj.showab();

    Myclass  obj2(6);
    obj2.showab();
    return 0;

}






