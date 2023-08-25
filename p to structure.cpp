#include<iostream>
using namespace std;
struct Rectangle{
    int length;
    int breadth;
};
int main()
{
    struct Rectangle r={10,5};
    struct Rectangle *p=&r;
    //(*p).length=25;
    p->length=25;
    //(*p).breadth=30;
    p->breadth=30;
    cout<<r.length<<endl;
    cout<<r.breadth<<endl;
    return 0;
}
