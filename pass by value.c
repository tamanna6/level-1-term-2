#include<stdio.h>
void swap(int x,int y)
{
    int temp;
    temp=x;
    x=y;
    y=temp;
   // return temp;
   printf("%d %d",x,y);
}
int main()
{
    int  a=10;
    int b=20;
    swap( a, b);
   // printf("%d %d ",a,b);
    return 0;

}
