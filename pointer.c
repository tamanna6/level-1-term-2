#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p;
    p=(int *)malloc(5*sizeof(int));
    p[0]=2;
    p[1]=4;
    p[2]=6;
    p[3]=8;
    p[4]=10;

    printf("%d  ",sizeof(p));


    for(int i=0; i<5; i++)
    {
        printf("%d ",p[i]);
    }
    free(p);
    return 0;
}
