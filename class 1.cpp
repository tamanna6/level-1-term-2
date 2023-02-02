#include<iostream>
using namespace std;
class myclass
{
private:

    int a;
    float b;
    public:
    void set_ab(int x,float  y)
    {
        a=x;
        b=y;

    }
    void show_ab()
    {
        cout<<a<<" "<<b<<endl;
    }
};
int main()
{
    myclass obj;
     obj.set_ab(5,7.6);
     obj.show_ab();
    return 0;


}




