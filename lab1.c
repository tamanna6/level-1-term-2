#include<stdio.h>
int main()
{
    int a[5],i,pos=2;
    printf("Printing all the elements of an array:");
    for( i=0;i<5;i++)
    {
        scanf("%d",&a[i]);

    }
   // printf("After update:");
   if(pos>=5)
   {
       printf("Can not delete");
   }
    for( i=pos-1;i<5;i++)
    {
       // printf("%d  ",a[i]);
     //  if(i==pos-1)
       //{
           a[i]=a[i+1];
      // }
       //else
       //{
          // printf("%d ",a[i]);
      // }
    }
    //a[pos-1]=value;
    printf("After Delete:");
    for(i=0;i<5;i++)
    {
        printf("%d ",a[i]);
    }

    return 0;

}
