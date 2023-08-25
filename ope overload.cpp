#include<iostream>
using namespace std;
class Number{
private:
    int x;
    int y;
public:
    Number(int a,int b)
    {
        x=a;
        y=b;
    }
    Number operator*(Number & obj)
    {
        Number temp;
        temp.x=x*obj.x;
        temp.y=y*obj.y;
        return temp;
    }
    int show()
    {
        cout<<x<<y<<endl;
    }
};
int main()
{
    Number n1(5,6),n2(7,8),result;
    result=n1*n2;
    result.show();
    return 0;
}







