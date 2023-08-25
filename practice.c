#include<stdio.h>
struct Rectangle{
    int length;
    int breadth;
};
int main()
{
    struct Rectangle *p;
    p=(struct Rectangle *)malloc(sizeof(struct Rectangle));
   // cout<<p.length<<endl;
    //cout<<p.breadth<<endl;
    printf("%d ",p->length);
    printf("%d ",p->breadth);
    return 0;



}

