#include<stdio.h>
int main()
{
    int var=20;
    int *ip;
    ip=&var;

   // char var2[20];
    printf(" Address of var variable :%x\n",&var);
    //printf("%x\n",&var2);
    printf("Addrerss stored in ip variable:%x\n",ip);
    printf("Value of *ip variable:%d\n",*ip);
    int **pptr;
    pptr=&ip;
    printf("Value available at**pptr=%d\n",**pptr);
    return 0;
}
