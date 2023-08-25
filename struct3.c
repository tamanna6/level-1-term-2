#include<stdio.h>
struct Rectangle{
    int length;
    int breadth;
    char x;
};
int main()
{
    struct Rectangle r1={10,5};
    r1.length=15;
    r1.breadth=7;
    printf("%d  ",sizeof(r1));
    printf("%d ",r1.breadth);
    printf("%d ",r1.length*r1.breadth);
    return 0;

}
