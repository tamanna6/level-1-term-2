#include<stdio.h>
struct Rectangle {
    int length;
    int breadth;
};
int main()
{
    struct Rectangle r;
    r.length=10;
    r.breadth=15;
    printf("%d",r.length*r.breadth);
}





