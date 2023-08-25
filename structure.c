#include<stdio.h>
struct Card{
    int face;
    int shape;
    int color;
};
int main()
{
   // struct Card deck[52]={{1,0,0},{2,0,0},{1,1,0},{2,1,0}};
   struct Card c={1,0,0};
   //c.face=1;
   //c.shape=0;
   //c.color=0;
    printf("%d ",c.face);
    printf("%d ",c.shape);
    return 0;


}





