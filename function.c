#include<stdio.h>
int add(int a,int b)
{
    //int c;
    //c=a+b;
    //return c;
    a++;
    printf("%d ",a);
}
int main()
{
    int x,y,z;
    x=10;
    y=5;
    z=add(x,y);
    printf("%d ",z);
    return 0;
}
