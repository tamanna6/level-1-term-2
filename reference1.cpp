#include<iostream>
using namespace std;
void swap(int &x,int &y)
{
    int temp;
    temp=x;
    x=y;
    y=temp;
    printf("%d %d ",x,y);
}
int main()
{
    int a=10;
    int b=20;
    swap(a,b);
    return 0;
}

